#include <iostream>
#include <httplib.h>
#include <string>

#include "add_contact.pb.h"
#include "contactsException.h"

using namespace std;
#define SERVER_IP "127.0.0.1"

void addContact(char*);
void delContact();
void findAllContact();
void findOneContact();
void menu()
{
	cout << "<-----请选择对通讯录的操作：----->" << endl;
	cout << "<-----1.新增联系人      2.删除联系人------------->" << endl;
	cout << "<-----3.查看所有联系人  4.查看联系人详细信息----->" << endl;
	cout << "<-----0.退出 ------------------------------------>" << endl;
}

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		cout << "Usage: " << "\n\t" << argv[0] << " PORT" << endl;
		return -1;
	}

	enum OPTION{QUIT = 0, ADD, DEL, FIND_ALL, FIND_ONE};
	while(true)
	{
	  menu();
		cout << "请选择操作# ";
		int option;
		cin >> option;
		cin.ignore(256, '\n');
		try{
		  switch(option)
		  {
		  	case QUIT:
		  		cout << "退出通信录" << endl;
		  		return 0;
		  	case ADD:
		  		addContact(argv[1]);
		  		break;
		  	case DEL:
		  		delContact();
		  		break;
		  	case FIND_ALL:
		  		findAllContact();
		  		break;
		  	case FIND_ONE:
		  		findOneContact();
		  		break;
		  	default:
		  		cout << "选择错误，请重新选择！" << endl;
		  		break;
		  }
		}catch(const ContactsException& e){
			// 进行异常捕获
			cout << "操作通讯录时异常：" << e.what() << endl;
			return -1;
		}
	}
	return 0;
}

void buildAddContactRequest(add_contact::AddContactRequest* req)
{
	cout << "新增联系人" << endl;

	string name;
	int32_t age;

	cout << "请输入联系人姓名：";
	getline(cin, name);
	req->set_name(name);

	cout << "请输入联系人年龄：";
	cin >> age;
	req->set_age(age);

	// ignore()可以清除输入缓冲区中的特定数据,防止影响后续的输入
	cin.ignore(256, '\n');  // 表示清除缓冲区中256个字符或者直到'\n'(会把'\n'也清除掉)

	for(int i = 1; ; ++i)
	{
		cout << "请输入联系人电话" << i << " (仅按回车表示完成)";
		string number;
		getline(cin, number);
		if(number.empty()) break;

		// add_phone方法都是返回对应的指针
		add_contact::AddContactRequest_Phone* phone = req->add_phone();
		phone->set_number(number);

		// 选择电话类型---enum
		cout << "请选择电话类型：1.移动电话(默认)  2.固定电话";
		int type;
		cin >> type;
		// ignore方法还是很常用的
		cin.ignore(256, '\n');
		switch(type)
		{
			case 1:
				phone->set_type(add_contact::AddContactRequest_Phone_PhoneType_MP);
				break;
			case 2:
				phone->set_type(add_contact::AddContactRequest_Phone_PhoneType_TEL);
				break;
			default:
				cout << "选择错误，使用默认方案---移动电话" << endl;
				break;
		}
	}
}

void addContact(char* s_port)
{
	int port = atoi(s_port);
	httplib::Client cli(SERVER_IP, port);
	// 1.构造request
	add_contact::AddContactRequest req;
	buildAddContactRequest(&req);
	// 2.对request进行序列化
	string req_str;
	if(!req.SerializeToString(&req_str))
		throw ContactsException("req.SerializeToString error!");  // 抛异常
	// 3.发起post请求并获得result(里面包含response)
	auto result = cli.Post("/contacts/add", req_str, "application/protobuf");
	if(!result)
	{
		string desc_info;
		desc_info += "/contacts/add 链接失败，错误信息：";
		desc_info += httplib::to_string(result.error());
		throw ContactsException(desc_info);
	}
	// 4.反序列化response
	add_contact::AddContactResponse resp;
	bool parse = resp.ParseFromString(result->body);
	if(result->status != 200 && !parse)
	{
		string desc_info;
		desc_info += "/contacts/add 调用失败，status: ";
		desc_info += std::to_string(result->status);
		desc_info += "(";
		desc_info += result->reason;
		desc_info += ")";
		throw ContactsException(desc_info);
	}
	else if(result->status != 200)
	{
		string desc_info;
		desc_info += "/contacts/add 调用失败，status: ";
		desc_info += std::to_string(result->status);
		desc_info += "(";
		desc_info += result->reason;
		desc_info += ")";
		desc_info += "\n错误原因：";
		desc_info += resp.desc_info();
		throw ContactsException(desc_info);
	}
	else if(!resp.success())
	{
		string desc_info;
		desc_info += "/contacts/add 结果异常: ";
		desc_info += resp.desc_info();
		throw ContactsException(desc_info);
	}
	// 5.打印结果
	cout << "新增联系人成功，联系人ID: " << resp.uid() << endl;
}
void delContact()
{

}
void findAllContact()
{

}
void findOneContact()
{

}
