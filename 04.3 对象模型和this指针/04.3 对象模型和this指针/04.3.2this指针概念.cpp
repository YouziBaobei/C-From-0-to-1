#include <iostream>
using namespace std;

/*
*	每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
*	问题：这一块代码是如何区分那个对象调用自己的呢？
* 
*	C++通过特殊的对象指针，this指针，解决上述问题。	this指针指向被调用的成员函数所属的对象
* 
*	this指针是隐含每一个非静态成员函数内的一种指针
*	this指针不需要定义，直接使用即可
* 
*	this指针的用途：
*	1、当形参和成员变量重名时，可用this指针来区分
*	2、在类的非静态成员函数中返回对象本身，可使用 return *this;
**/

class Person
{
public:

	Person(int age) { // 1、解决名称冲突
		//this指针指向被调用的成员函数所属的对象 Person p1 调用 Person(int age)
		this->age = age;
	};

	Person & PersonAddAge(Person &p) { //引用的方式返回一直是p2对象 如果不加&引用，则返回一个新对象p2’
		this->age += p.age;
		// this是指向p2本身
		return *this;
	}
	 

	int age;

private:

};

void test01() {
	Person p1(18);
	cout << "P1的年龄为 ： " << p1.age << endl;
}

void test02() {
	Person p1(10);

	Person p2(10);

	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄为： " << p2.age << endl;
}

int main() {
	//test01();
	test02();

 	system("pause");
	return 0;
}