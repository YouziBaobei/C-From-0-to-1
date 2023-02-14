#include <iostream>
using namespace std;

//交换函数

//1.值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "mySwap01 值传递，形参改变 " << endl;
	cout << "mySwap01 a=  " << a << endl; //值传递，形参改变
	cout << "mySwap01 b=  " << b << endl;
	cout << "\n" << endl;

 }
//2.地址传递

void mySwap02(int* a, int* b) {
	int temp = * a;
	*a = *b;
	*b = temp;
	cout << "mySwap02 地址传递，形参改变 " << endl;
	cout << "mySwap02 a=  " << *a << endl; //值传递，形参改变
	cout << "mySwap02 b=  " << *b << endl;
	cout << "\n" << endl;

}

//3.引用传递 

void mySwap03(int& a, int& b) {
	int temp = a; 
	a = b;
	b = temp;
	cout << "mySwap03 引用传递，形参改变 " << endl;
	cout << "mySwap03 a=  " << a << endl; //值传递，形参改变
	cout << "mySwap03 b=  " << b << endl;
	cout << "\n" << endl;
}


int main() {
	int a = 10;
	int b = 20;

	//mySwap01(a, b); //值传递，形参不会修饰实参
	//cout << "mySwap01 值传递，实参不发生改变 " << endl;
	//cout << "main a=  " << a << endl;
	//cout << "main b=  " << b << endl;
	//cout << "\n" << endl;

	//mySwap02(&a, &b); //地址传递，形参会修饰实参
	//cout << "mySwap02 地址传递，实参发生改变 " << endl;
	//cout << "main a=  " << a << endl;
	//cout << "main b=  " << b << endl;
	//cout << "\n" << endl;

	mySwap03(a, b); //引用传递，形参会修饰实参
	cout << "mySwap03 引用传递，实参发生改变 " << endl;
	cout << "main a=  " << a << endl;
	cout << "main b=  " << b << endl;
	cout << "\n" << endl;
	return 0;
}