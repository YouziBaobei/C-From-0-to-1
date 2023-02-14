#include <iostream>
using namespace std;

// 成员变量 与 成员函数 分开存储

class Person
{
public:
	int m_A; //非静态成员变量，属于类的对象上的

	static int m_B; //静态成员变量，不属于类的对象

	void func() {
		cout << "func 的调用" << endl; //成员函数，不属于类的对象
	}

	static void func2() {
		cout << "func2 的调用" << endl; //静态成员函数，不属于类的对象
	}

private:

};

int Person::m_B = 10;

void test01() {
	Person p;
	// 空对象占用内存空间为：1字节
	//c++编译器会给每一个空对象也分配一个字节空间，为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
};

void test02() {
	Person p;
	// int类型占用：4个字节
	cout << "size of p = " << sizeof(p) << endl;
}



int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}