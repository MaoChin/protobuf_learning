#include <iostream>
#include <string>
#include "contacts.pb.h"
using namespace std;


int main()
{
	string peopleInfo;
	{
		contacts::PeopleInfo peo;
		peo.set_name("aaa");
		peo.set_age(100);
		// 序列化
		if(!peo.SerializeToString(&peopleInfo))
			cout << "peo.SerializeToString() error" << endl;

		cout << "序列化后: " << peopleInfo << endl;
	}

	{
		contacts::PeopleInfo peo;
		// 反序列化
		if(!peo.ParseFromString(peopleInfo))
			cout << "peo.ParseFromString() error" << endl;

		cout << "name: " << peo.name() << endl;
		cout << "age: " << peo.age() << endl;
	}

	return 0;
}
