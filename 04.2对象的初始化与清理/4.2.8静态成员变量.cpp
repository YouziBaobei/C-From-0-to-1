#include <iostream>
using namespace std;
/*
*	静态成员变量
*	1、所有成员共享一份数据（A修改后 B访问是A修改后的值）
*	2、在编译阶段分配内存	（程序还没有生成之前就已经分配了，分配在全局区内）
*	3、类内声明，类外初始化
*	
*	静态成员函数   (调用非静态成员函数需要一个对象)
*	1、所有对象共享一个函数
*	2、静态成员函数只能访问静态成员变量
*/

class Person
{
public:

	static int m_A; //静态成员变量（类内声明） 

	void Printm_B() {
		cout << m_B << endl;
	}

private:
	static int m_B; //静态成员变量也是有访问权限的

};

int Person::m_A = 100; //类外初始化
int Person::m_B = 200;

//void test01() {
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//};

void test02() {
	//静态成员变量不在某个对象上，所有对象都共享一个数据
	//因此静态成员变量有两种访问方式

	//1、通过对象进行访问 p.m_A

	//2、通过类名进行访问 Person::m_A
	cout << Person::m_A << endl;
	
}


int main() {
	test02();

	system("pause");
	return 0;
}