#include <iostream>
using namespace std;
//常量引用：用来修饰形参，防止误操作
void showValue(const int &val) {
	//val = 1000; 常量不可修改
	cout <<"value = " << val << endl;
}


int main() {
	//int a = 10;

	//int& ref = 10;引用必须引用一块合法的内存空间（带内存地址的数据）
	//const int & ref = 10; //加上const之后，编译器将代码修改 int temp = 10 int & ref = temp;

	//const int& ref = 10;
	//ref = 20; //加入const之后变成常量，只读不可修改

	int a = 100;
	showValue(a);
	cout << "a = " << a << endl; //函数内部被修改 外部变量也被修改
	

	system("pause");
	return 0;
}