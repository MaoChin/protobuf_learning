#include <iostream>
#include <httplib.h>

#include "add_contact.pb.h"
#include "contactsException.h"

using namespace std;

#define SERVER_IP "0.0.0.0"
#define SERVER_PORT 8080

int main()
{
	cout << "服务启动" << endl;

	httplib::Server server;
	server.Post("/contacts/add", [](const httplib::Request& req, httplib::Response& resp){
			cout << "接收到Post请求" << endl;
			// 1.反序列化request(req.body)
			// 2.业务处理(新增联系人，持久化存储)
			// 3.构造response(result.body)
			// 4.序列化response

		});


	server.listen(SERVER_IP, SERVER_PORT);
	return 0;
}
