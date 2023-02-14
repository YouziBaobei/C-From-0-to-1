//封装是c++面向对象的三大特性之一
//封装的意义：
	// ·将属性和行为作为一个整体
	// ·将属性和行为加以权限控制
//在设计类的时候，属性和行为写在一起
//语法：class 类名{访问权限 : 属性 / 行为};

/*
封装是面向对象编程中的把数据和操作数据的函数绑定在一起的一个概念，这样能避免受到外界的干扰和误用，从而确保了安全。数据封装引申出了另一个重要的 OOP 概念，即数据隐藏
数据封装是一种把数据和操作数据的函数捆绑在一起的机制，数据抽象是一种仅向用户暴露接口而把具体的实现细节隐藏起来的机制。
C++ 通过创建类来支持封装和数据隐藏（public、protected、private）
类包含私有成员（private）、保护成员（protected）和公有成员（public）成员
默认情况下，在类中定义的所有项目都是私有的
*/

#include <iostream>
using namespace std;
const double PI = 3.14;


//设计一个圆类，求周长

class Yuan
{
public:
	double Yuan_Banjing;

	double Yuan_Zhouchang() {
		return Yuan_Banjing * 2 * PI;
	}

private:

};


int main() {
	Yuan yuan01;
	yuan01.Yuan_Banjing = 10;
	cout << "圆的周长为： " << yuan01.Yuan_Zhouchang() << endl;


	system("pause");
	return 0;
}