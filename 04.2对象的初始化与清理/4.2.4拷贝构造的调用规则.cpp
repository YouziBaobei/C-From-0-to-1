#include <iostream>
using namespace std;
/*
*	 ���캯���ĵ��ù���
*	1������һ���࣬C++�������ͻ��ÿ�������������������
*	������Ĭ�Ϲ��� �������� ��������
* 
*	Ĭ�Ϲ��죺��ʵ��
*	������������ʵ��
*	�������죺ֵ����
* 
*/

class Person
{
public:
	//Person() {
	//	cout << "Person Ĭ�Ϲ��캯������" << endl;
	//};

	//Person(int age) {
	//	m_Age = age;
	//	cout << "Person �вι��캯���ĵ���" << endl;
	//};

	Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "Person �������캯���ĵ���" << endl;
	};

	~Person() { 
		cout << "Person ���������ĵ���" << endl;
	};
	
	//2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ�������캯����
	//3���������д�˿������캯�����������Ͳ����ṩ��������ͨ���캯����

public:

	int m_Age;

};

//void test01() {
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//	cout << "p2������Ϊ�� " << p2.m_Age << endl;
//};

void test02() {
	Person p;

	Person p2(p);

	cout << "P2������Ϊ�� " << p2.m_Age << endl;

};

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}