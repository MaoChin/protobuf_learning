#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <iostream>
#include <string>
#include <fstream>
#include "contacts.pb.h"
using namespace std;
using namespace contacts;

// 使用protobuf构建通讯录2.0
// 从磁盘中读取序列化后的文件，并进行添加，然后重新序列化后写回磁盘。

void AddPeopelInfo(PeopleInfo* people_info_ptr)
{
	cout << "新增联系人" << endl;

	string name;
	int32_t age;

	cout << "请输入联系人姓名：";
	getline(cin, name);
	people_info_ptr->set_name(name);

	cout << "请输入联系人年龄：";
	cin >> age;
	people_info_ptr->set_age(age);

	// ignore()可以清除输入缓冲区中的特定数据,防止影响后续的输入
	cin.ignore(256, '\n');  // 表示清除缓冲区中256个字符或者直到'\n'(会把'\n'也清除掉)

	for(int i = 1; ; ++i)
	{
		cout << "请输入联系人电话" << i << " (仅按回车表示完成)";
		string number;
		getline(cin, number);
		if(number.empty()) break;

		// add_phone方法都是返回对应的指针
		PeopleInfo_Phone* phone = people_info_ptr->add_phone();
		phone->set_num(number);
	}
	cout << "添加联系人成功" << endl;
}

int main(int argc, char* argv[]){
	// 宏定义，验证有没有意外链接到与编译的头文件不兼容的库版本
	// 就是说如果装了多个版本的protobuf，可能会链接到别的版本！这个宏可以进行检测
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	if(argc != 2){
		cerr << "Usage: " << argv[0] << " CONTACTS_FILE" << endl;
		return -1;
	}

	Contacts contacts;

	// 从磁盘读取文件信息，要以二进制的方式读取，因为序列化存储时就是二进制的
	ifstream input(argv[1], ios::in | ios::binary);
	if(!input.is_open())
		cout << argv[1] << ": file not found, create a new file" << endl;
	else if(!contacts.ParseFromIstream(&input)){   // 该方法会从流中读取并进行反序列化到contacts中
		cerr << "failed to parse contacts" << endl;
		input.close();
		return -1;
	}

	// 添加联系人信息,add_contacts()函数返回一个对应类型的指针，且对应空间以及开辟好了，直接写入即可
	AddPeopelInfo(contacts.add_contacts());

	// 向磁盘写入
	ofstream output(argv[1], ios::out | ios::trunc | ios::binary);
	if(!output.is_open())
		cout << argv[1] << ": file not found, create a new file" << endl;
	else if(!contacts.SerializeToOstream(&output)){  // 该方法会序列化contacts并且写入到流中
		cerr << "failed to write contacts" << endl;
		input.close();
		output.close();
		return -1;
	}
	cout << "write success" << endl;
	input.close();
	output.close();

	// 在程序结束时调用这个函数删除protocol buffer库分配的所有全局对象
	google::protobuf::ShutdownProtobufLibrary();

	return 0;
}
