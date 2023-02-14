#include <iostream>
using namespace std;
//	运算符重载的概念：
//	对已有的运算符进行重新定义，赋予另外一种功能，以适应不用的数据类型

//	关键字：operator+

class Person{
public:
	int m_A;
	int m_B;

public:
	//Person operator+(Person& p) { //通过成员函数重载 + 号
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}
};

//Person operator+(Person& p1, Person& p2) { //通过全局函数重载 + 号
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_B;
//	temp.m_B = p1.m_A + p2.m_B;
//	return temp;
//}

Person operator+(Person& p1, int num) { //通过全局函数重载 + 号
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_A + num;
	return temp;
}

int main() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;

	//Person p3 = p1.operator+(p2); Person + Person
	//简化为↓↓↓↓↓↓↓↓↓↓↓↓
	//Person p3 = p1 + p2;

	Person p3 = p1 + 20; //Person + Num

	cout << "p3.m_A的值为：" << p3.m_A << endl;
	cout << "p3.m_B的值为：" << p3.m_B << endl;

	cout << 1 + 2 << endl;

	system("pause");
	return 0;
}