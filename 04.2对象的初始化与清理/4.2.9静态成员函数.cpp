#include <iostream>
using namespace std;
/*	
*	静态成员函数   (调用非静态成员函数需要一个对象)
*	1、所有对象共享一个函数
*	2、静态成员函数只能访问静态成员变量
*/

class Person
{
public:

	static void func() { //静态成员函数
		m_A = 100;//静态成员函数 可以访问  静态成员变量
		//m_B = 200; 静态成员函数 不可以访问 非静态成员变量 

		cout << "static void func 调用" << endl;
	}

	//静态成员变量也有访问权限

	static int m_A;
	int m_B;
private:
	static void func2() {
		cout << "static void func2() 的调用" << endl;
	}

};

int Person::m_A = 0;



void test01() {
	//1、 通过对象来访问
	Person p1;
	p1.func();

	//2、通过类名来访问
	Person::func();
}


int main() {
	test01();

	system("pause");
	return 0;
}