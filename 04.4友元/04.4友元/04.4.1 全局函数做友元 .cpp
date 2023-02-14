#include <iostream>
#include <string>
using namespace std;

/*	友元的关键词是 friend
	在程序里有些私有属性，也想让类外特殊的一些函数或者类进行访问，就需要用到友元技术
	友元的目的就是让一个函数或类 访问另一个类中私有成员

	友元的三种实现↓↓↓
	1、全局函数做友元
	2、类做友元
	3、成员函数做友元
*/

class Building { //房间类

	friend void GoodGay(Building& building); //友元类声明

public:
	Building() {
		m_sittingRoom = "客厅";
		m_BedRoom = "卧室";
	};

public:
	string m_sittingRoom; //客厅
private:
	string m_BedRoom; //卧室
};

//全局函数
void GoodGay(Building &building) {
	cout << "好基友的全局函数，正在访问 ： " << building.m_sittingRoom << endl;
	cout << "好基友的全局函数，正在访问 ： " << building.m_BedRoom << endl;
}

void test01(){
	Building building;
	GoodGay(building);
}

int main() {
	test01();

	system("pause");
	return 0;
}