#include <google/protobuf/message.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/unknown_field_set.h>
#include <iostream>
#include <string>
#include <fstream>
#include "contacts.pb.h"
using namespace std;
using namespace contacts;
using namespace google::protobuf;

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
			cout << "phone_number" << j++ << ": " << phone.num() << endl;

	  // 打印未知字段
	  const Reflection* reflection = PeopleInfo::GetReflection();
	  const UnknownFieldSet& unknowSet = reflection->GetUnknownFields(people);
	  for(int i = 0; i < unknowSet.field_count(); ++i)
	  {
	  	const UnknownField& unknowField = unknowSet.field(i);
	  	cout << "未知字段" << i + 1 << ": " << "字段编号: " << unknowField.number()
	  	 << "字段类型: " << unknowField.type();
	  	switch(unknowField.type())
	  	{
				// 表示变长标量整型
	  		case UnknownField::Type::TYPE_VARINT:
	  			cout << " 值: " << unknowField.varint() << endl;
	  			break;
				// 表示string类型
	  		case UnknownField::Type::TYPE_LENGTH_DELIMITED:
	  			cout << " 值: " << unknowField.length_delimited() << endl;
	  			break;
				// case ...
	  		default:
	  			break;
	  	}
	  }
	}
}

int main(int argc, char* argv[])
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	if(argc != 2)
	{
		cerr << "Usage: " << argv[0] <<  " CONTACTS_FILE" << endl;
		return -1;
	}

	Contacts contacts;

	// 以二进制的方式读取
	ifstream input(argv[1], ios::in | ios::binary);
	if(!input.is_open())
		cout << argv[1] << " is not exixts!" << endl;
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
