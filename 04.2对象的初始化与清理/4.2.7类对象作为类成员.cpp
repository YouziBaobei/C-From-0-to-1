#include <iostream>
#include<string>
using namespace std;

//类对象作为类成员

	//手机类
class Phone {

public:
	Phone(string pName) {
		m_pName = pName;
		cout << "Phone构造函数调用" << endl;

	}
	~Phone() {
		cout << "Phone的析构函数" << endl;
	}
	string m_pName;
};


class Person {

	//用户类
public:
	Person(string name, string pName) : m_Name(name), m_Phone(pName){
		cout << "Person构造函数调用" << endl;
	};

	~Person() {
		cout << "Person的析构函数" << endl;
	}

	string m_Name;
	Phone m_Phone;

};

//当其他类的对象作为本类的成员，构造的时候先构造其他类的对象，再构造自身
//析构函数，最先构造的最后析构，与构造顺序相反

void test01() {
	Person p("张三", "Iphone13pro");
	cout << p.m_Name << "拿着" << p.m_Phone.m_pName << endl;
}


int main() {

	test01();

	system("pause");
	return 0;
}