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
class Building;
class GoodGay {
public:
	GoodGay();

	void visit(); //函数可以访问Building中私有成员

	void visit02(); //02不可以访问

	Building* building;
};
class Building {
void friend GoodGay::visit(); //告诉编译器 GoodGay下的visit成员函数 作为本类的好朋友 可以访问私有
public:
	Building();

	string m_SettingRoom; //客厅
private:
	string m_BedRoom; //卧室
};
GoodGay::GoodGay() {
	building = new Building;
};
Building::Building() {
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
};

void GoodGay::visit() {
	cout << "visit函数正在访问：" << building->m_SettingRoom << endl;
	cout << "visit函数正在访问：" << building->m_BedRoom << endl;
};
void GoodGay::visit02() {
	cout << "visit02函数正在访问：" << building->m_SettingRoom << endl;
	// cout << "visit02函数正在访问：" << building->m_BedRoom << endl; //无法访问 private 成员
};
void test01() {
	GoodGay gg;
	gg.visit();
	gg.visit02();
};

int main() {
	test01();

	system("pause");
	return 0;
}