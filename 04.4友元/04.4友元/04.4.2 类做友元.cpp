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

class Building; // GoodGay类中创建了Building对象 所以需要提前声明
class GoodGay { //类作友元
public:
	GoodGay();
	Building* building;
public:
	void visit(); //参观函数 访问Building中的属性
private:
	
};

class Building
{
	friend class GoodGay;//GoodGay是本类的好朋友 可以访问本类的私有成员
public:
	Building();
public:
	string m_SittingRoom; //客厅
private:
	string m_BedRoom; //卧室
};

//类外写成员函数
Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGay::GoodGay() {
	building = new Building;//创建一个Building对象 -> buiding是指针类型 所以需要new关键字来创建

};

void GoodGay::visit() {
	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;;
	cout << "好基友类正在访问：" << building->m_BedRoom << endl;;
};

void test01() {
	GoodGay gg;
	gg.visit();
}

int main() { 
	test01();

	system("pause");
	return 0;
}