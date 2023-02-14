#include<iostream>
using namespace std;

int  * func() {
	//利用new关键字  可以将数据开辟到堆区 
	//new返回 ==》 该数据类型的指针
	
	int * p = new int(1234);  
	//new的什么数据类型 用什么数据类型的指针去接收

	return p;
}


int main() {
	//在堆区开辟数据
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	cout << *p << endl;
	system("pause");
	return 0;
}