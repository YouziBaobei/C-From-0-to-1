#include <iostream>
using namespace std;
//函数默认参数
//如果我们自己传入数据，就用自己的数据，如果没有，就用默认值
//语法：返回值类型 函数名称（形参 = 默认值,……）

/**  注意事项
	1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
	2.如果函数声明有默认参数，函数实现就不能有默认参数——>(函数声明，先写函数头，再写函数体)
	3.声明和实现只能有一个存在默认参数
	
**/

int func01(int a = 10 ,int b = 10,int c=10) {
	return a + b + c;
}

int func02(int a, int b = 10, int c = 10) {
	return a + b + c;
}
//int func03(int a=10, int b = 10, int c ) { 只能省略左边的默认值
//	return a + b + c;
//}

int main() {
	cout << func01(20, 30, 40) << endl; //默认参数可以被替换
	cout << func02(20) << endl; 
	// cout << func03(30,40,50) << endl;  只能省略左边的默认值


	system("pause");
	return 0;
}