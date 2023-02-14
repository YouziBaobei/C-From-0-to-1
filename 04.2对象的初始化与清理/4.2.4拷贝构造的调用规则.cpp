#include <iostream>
using namespace std;
/*
*	 构造函数的调用规则
*	1、创建一个类，C++编译器就会给每个类添加至少三个函数
*	——》默认构造 析构函数 拷贝构造
* 
*	默认构造：空实现
*	析构函数：空实现
*	拷贝构造：值拷贝
* 
*/

class Person
{
public:
	//Person() {
	//	cout << "Person 默认构造函数调用" << endl;
	//};

	//Person(int age) {
	//	m_Age = age;
	//	cout << "Person 有参构造函数的调用" << endl;
	//};

	Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "Person 拷贝构造函数的调用" << endl;
	};

	~Person() { 
		cout << "Person 析构函数的调用" << endl;
	};
	
	//2、如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造函数。
	//3、如果我们写了拷贝构造函数，编译器就不在提供其它的普通构造函数。

public:

	int m_Age;

};

//void test01() {
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//	cout << "p2的年龄为： " << p2.m_Age << endl;
//};

void test02() {
	Person p;

	Person p2(p);

	cout << "P2的年龄为： " << p2.m_Age << endl;

};

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}