#include <google/protobuf/stubs/common.h>
#include <iostream>
#include <string>
#include <fstream>
#include "contacts.pb.h"
using namespace std;
using namespace contacts;

// 读取磁盘上序列化后的文件并反序列化后打印

void Print(const Contacts& contacts)
{
	// 遍历contacts
	for(int i = 0; i < contacts.contacts_size(); ++i)
	{
		const PeopleInfo& people = contacts.contacts(i);
		cout << "联系人" << i + 1 << ":" << endl;
		cout << "name: " << people.name() << endl;
		cout << "age: " << people.age() << endl;

		int j = 1;
		// phone也是repeated修饰的，编译后就是数组，也要遍历
		for(const PeopleInfo_Phone& phone : people.phone())
			cout << "phone_number" << j << ": " << phone.num() << endl;
	}
}

int main(int argc, char* argv[])
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	if(argc != 2)
	{
		cerr << "Usage: " << "argv[0] CONTACTS_FILE" << endl;
		return -1;
	}

	Contacts contacts;

	// 以二进制的方式读取
	ifstream input(argv[1], ios::in | ios::binary);
	if(!input.is_open())
		cout << argv[1] << " is not exixts! create this file" << endl;
	else if(!contacts.ParseFromIstream(&input))
	{
		cerr << "failed to parse contacts" << endl;
		input.close();
		return -1;
	}

	Print(contacts);
	input.close();
	google::protobuf::ShutdownProtobufLibrary();

	return 0;
}
