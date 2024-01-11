#include <google/protobuf/stubs/port.h>
#include <iostream>
#include <string>
#include <fstream>
#include "contacts.pb.h"
using namespace std;
using namespace contacts;

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
	cin.ignore(256, '\n');

	for(int i = 1; ; ++i)
	{
		cout << "请输入联系人电话" << i << " (仅按回车表示完成)";
		string number;
		getline(cin, number);
		if(number.empty()) break;

		PeopleInfo_Phone* phone = people_info_ptr->add_phone();
		phone->set_num(number);
	}
	cout << "添加联系人成功" << endl;
}

int main(int argc, char* argv[]){
	// 宏定义，验证有没有意外链接到与编译的头文件不兼容的库版本
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	if(argc != 2){
		cerr << "Usage: " << argv[0] << " CONTACTS_FILE" << endl;
		return -1;
	}

	Contacts contacts;

	// 从磁盘读取
	ifstream input(argv[1], ios::in | ios::binary);
	if(!input.is_open())
		cout << argv[1] << ": file not found, create a new file" << endl;
	else if(!contacts.ParseFromIstream(&input)){
		cerr << "failed to parse contacts" << endl;
		input.close();
		return -1;
	}

	AddPeopelInfo(contacts.add_contacts());


	// 向磁盘写入
	ofstream output(argv[1], ios::out | ios::trunc | ios::binary);
	if(!output.is_open())
		cout << argv[1] << ": file not found, create a new file" << endl;
	else if(!contacts.SerializeToOstream(&output)){
		cerr << "failed to write contacts" << endl;
		input.close();
		output.close();
		return -1;
	}
	input.close();
	output.close();


	return 0;
}
