#include <iostream>
using namespace std;

//函数重载
//函数名相同，提高复用性
//1.必须在同一个作用域下
//2.函数名称相同
//3.参数类型 个数不同 顺序不同

void func() {  
	cout << "func的调用" << endl;
}

void func(int a) { 
	cout << "func的调用(int a)" << endl;
}


int main() {
	func();

	return 0;
}