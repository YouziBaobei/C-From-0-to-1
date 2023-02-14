#include <iostream>
using namespace std;
/*
* C++拷贝构造调用时机一般有三种情况
* 1、使用一个已创建完毕的对象来初始化一个新对象
* 2、值传递的方式给函数参数传值
* 3、以值方式返回局部对象
*/

class Person
{
public:
	Person();
	Person(int Age);
	Person(const Person& p);
	~Person();
	int m_Age;

private:

};

Person::Person()
{
	cout << "默认构造函数的调用" << endl;
}

Person::Person(int Age) {
	cout << "有参函数的调用" << endl;
	m_Age = Age;
}

Person::Person(const Person& p) {
	cout << "拷贝构造函数的调用" << endl;
	m_Age = p.m_Age;
}

Person::~Person()
{
	cout << "析构函数的调用" << endl;
}

// 1、使用一个已创建完毕的对象来初始化一个新对象
void test01() {
	Person p1(20);
	Person p2(p1);

	cout << "P2的年龄为：  " << p2.m_Age << endl;
}

//2、值传递的方式给函数参数传值
void doWork(Person p) {
	//拷贝出来一个新的对象，只能在函数体中使用，不会影响实参
}

void test02() {
	Person p;
	doWork(p);
}

//3、以值方式返回局部对象
Person& doWork2() {
	Person p3;
	cout << &p3 << endl;
	return p3; //根据P3创建新对象 返回给test03
	
}

void test03() {
	Person p4 = doWork2();
	cout << &p4 << endl;
}

int main() {

	//test01();
	//test02();
	//doWork2();
	test03();

	system("pause");
	return 0;
}