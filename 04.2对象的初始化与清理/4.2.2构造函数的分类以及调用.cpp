#include <iostream>
using namespace std;
/* 
*	两种分类方式
*	1、按参数分为 有参构造|无参构造
*	2、按类型分为 普通构造|拷贝构造
* 
*	三种调用方式
*	1、括号法
*	2、显示法
*	3、隐式转换法
*/

class MyClass
{
public:
	MyClass() { //无参构造函数(默认构造函数)
		cout << "MyClass的无参构造函数调用" << endl;
	};

	MyClass(int a) { //有参构造函数
		age = a;
		cout << "MyClass的有参构造函数调用" << endl;
	};

	//拷贝构造函数
	MyClass(const MyClass &M) { //引用的方式传递 + const 防止拷贝过程中被修改
		cout << "MyClass的拷贝构造函数调用" << endl;
		//将传入的对象所有属性，拷贝到新的对象上
		age = M.age;
	}

	~MyClass() { //析构函数
		cout << "MyClass的析构函数调用" << endl;
	};

	int age;

private:

};

void test01() {
	//1、括号法
	MyClass M1; //默认构造函数的调用
	MyClass M2(10); //有参构造函数的调用
	MyClass M3(M2); //拷贝构造函数的调用
	
	/*
	*           注意事项
	* 调用默认构造函数的时候，不要加()
	* MyClass M1() ——> 这行代码编译器会认为是一个函数的声明;
	*   ^      ^  
	* 返回类型  函数名
	*/


	//拷贝构造的复制案例
	//cout << "M2的年龄为： " << M2.age <<endl;
	//cout << "M3的年龄为： " << M3.age << endl;

}

void test02() {
	//2、显示法
	MyClass M1; //默认构造
	MyClass M2 = MyClass(10);  //有参构造
	MyClass M3 = MyClass(M2);  //拷贝构造 

	//MyClass(10) 单独执行创造一个匿名对象 特点：当前行结束后，系统会立即回收掉匿名对象（执行析构函数）
	//注意事项：不要用拷贝构造函数来初始化一个匿名对象

	// MyClass (M3);  “MyClass M3”: 重定义   编译器会认为 MyClass(M3) === MyClass M3;
}

void test03() {
	//3、隐式转换法
	MyClass M1 = 10; //相当于 MyClass M1 = MyClass (10)

	MyClass M2 = M1; //相当于 MyClass M2 = MyClass (M1);
}


int main() {

	test03();


	system("pause");
	return 0;
}