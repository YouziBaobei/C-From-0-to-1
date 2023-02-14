#include <iostream>
using namespace std;
//引用做函数返回值
//1.不要返回局部变量的函数

//2.函数的调用可以作为左值存在

//3.不管是函数赋值、取函数地址、调用函数都会执行函数体内部代码

int &test01() {
	int a = 10; //局部变量  存放在四区中的栈区（函数执行完毕后释放）
	return a;
}

int &test02() {
	static int a = 10; //static 全局变量
	cout << "函数体内部获取全局变量a的内存地址 = " << &a << endl;
	return a;
}

int test03() {
	static int b = 10;
	return b;
}


int main() {

	int &ref = test01();
	cout << "ref = " << ref << endl;  //非法操作，局部变量a的内存已经被释放

	
	int& ref2 = test02();

	cout << "ref2 = " << ref2 << endl; //ref2 = 10

	test02() = 1000; //引用函数返回的是A的变量 

	cout << "test02() = " << &test02() << endl;

	ref2 = 2000;

	cout << "ref2 = " << ref2 << endl; //ref2 = 10





	//int c = 10;
	//int& d = c;
	//int& e = d;

	//cout << "多层调用=" << e << endl; //引用（别名） 可以多层嵌套
	

	system("pause");
	return 0;
}