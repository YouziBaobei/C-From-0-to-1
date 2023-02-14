#include <iostream>
using namespace std;
/*
*	常函数：
*	1、成员函数后加const后我们称这个函数为常函数
*	2、常函数内不可以修改成员属性
*	3、成员属性声明时加关键词mutable后，在常函数中依然可以修改
* 
*	常对象：
*	1、声明对象前加const称该对象为常对象
*	2、常对象只能调用常函数
*	
*/
class Person
{
public:
	Person(int age, int m_B) :m_Age(age), m_Height(m_B) {};

	//this指针本质 是指针常量 指针的指向不可修改
	//相当于 Person * const this; 可以修改指向的值
	// 
	//在成员函数后面加const，修饰的是this指针，让指针的值也不可以修改
	//cont Person * const this; 只能指向Person --->常函数
	void func() const { //常函数

		this->m_Height = 180;
		//this->m_Age = 20;
		//this = NULL; //this指针不可修改指向

		cout << "Age：" << m_Age << endl;
		cout << "Height：" << m_Height << endl;
		cout << "常函数调用" << endl;
	};

	void func02() { //普通函数 
		m_Age = 100;
		cout << "func02 的调用 " << endl;
	}

	 int m_Age; //常属性 不可修改

	 mutable int m_Height; //特殊变量，即使在常函数中，也可以修改这个值

};

void test01() {
	Person p(10,160);
	p.func();
}

void test02() {
	const Person p(12, 180); //常对象
	//p.m_Age = 100;
	p.m_Height = 100;  //特殊值 在常对象下也可以修改
	//p.func02();常对象 无法调用普通函数 因为普通成员函数可以修改属性
}

int main() {
	test02();

	system("pause");
	return 0;
}