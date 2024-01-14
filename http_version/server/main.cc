#include <iostream>
#include <httplib.h>

#include "add_contact.pb.h"
#include "contactsException.h"

using namespace std;

#define SERVER_IP "0.0.0.0"
#define SERVER_PORT 8080

void Print(add_contact::AddContactRequest& request);

unsigned int random_char()
{
  // 用于随机数引擎获得随机种子
  random_device rd;
  // mt19937是c++11新特性，它是一种随机数算法，用法与rand()函数类似
	// 但是mt19937具有速度快，周期长的特点
  mt19937 gen(rd());
  // 随机生成一个整数i范围[0, 255]
  uniform_int_distribution<> dis(0, 255);
  return dis(gen);
}
// 生成 UUID （通用唯一标识符）
string generate_hex(const unsigned int len)
{
  stringstream ss;
  // 生成len个16进制随机数，将其拼接而成
  for (auto i = 0; i < len; i++)
 	{
    const auto rc = random_char();
    stringstream hexstream;
    hexstream << hex << rc;
    auto hex = hexstream.str();
    ss << (hex.length() < 2 ? '0' + hex : hex);
  }
  return ss.str();
}

int main()
{
	cout << "服务启动" << endl;

	httplib::Server server;
	server.Post("/contacts/add", [](const httplib::Request& req, httplib::Response& resp){
			cout << "接收到Post请求" << endl;
			add_contact::AddContactRequest request;
			add_contact::AddContactResponse response;
			try{
				// 1.反序列化request(req.body)
			  if(!request.ParseFromString(req.body))
			  {
			  	throw ContactsException("request 反序列化失败");
			  }
			  // 2.业务处理(新增联系人，持久化存储)
				//	这里就打印一下
				Print(request);
			  // 3.构造response(result.body)
				response.set_success(true);
				response.set_uid(generate_hex(10));
			  // 4.序列化response
				string response_str;
				if(!response.SerializeToString(&response_str))
				{
			  	throw ContactsException("reponse 序列化失败");
				}
				resp.status = 200;
				resp.body = response_str;
				resp.set_header("Content-Type", "application/protobuf");
			}catch(const ContactsException& e){
				resp.status = 500;
				response.set_success(false);
				response.set_desc_info(e.what());

				string response_str;
				// 序列化
				if(response.SerializeToString(&response_str))
				{
					resp.body = response_str;
					resp.set_header("Content-Type", "application/protobuf");
				}
				cout << "/contacts/add 异常：" << e.what() << endl;
			}
		});

	server.listen(SERVER_IP, SERVER_PORT);
	return 0;
}
void Print(add_contact::AddContactRequest& request)
{
	// 遍历contacts
	cout << "新增联系人: " << endl;
	cout << "name: " << request.name() << endl;
	cout << "age: " << request.age() << endl;

	int j = 1;
	// phone也是repeated修饰的，编译后就是数组，也要遍历
	for(const add_contact::AddContactRequest_Phone& phone : request.phone())
		cout << "phone_number" << j++ << ": " << phone.number() << " ("
			<< phone.PhoneType_Name(phone.type()) << ")" << endl;
}
