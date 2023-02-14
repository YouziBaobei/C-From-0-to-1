#include <iostream>
using namespace std;

int main() {
	//引用的基本语法
	//数据类型 & 别名 = 原名
	int a = 10;
	int& b = a;
	b = 20;
	cout << a << endl;
	cout << &a << endl;   //同一个内存地址
	cout << &b << endl;

	/*
		三个注意事项
		1.引用必须要初始化操作
		2.一旦初始化后，就不能更改引用目标  XXX int &b = a 
		3.赋值操作  XXX b = c 
	*/



	system("pause");
	return 0;
}