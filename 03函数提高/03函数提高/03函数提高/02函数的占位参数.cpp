#include <iostream>
using namespace std;
// 语法：返回值 函数名 （数据类型）{}
int func(int a,int) {
	cout << "This is func." << endl;
	return 0;
}
int main() {

	//func();   “func”: 函数不接受 0 个参数
	func(10,20);//必须传入int数据类型
	system("pause");
	return 0;
}