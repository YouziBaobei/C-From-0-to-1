#include <iostream>
using namespace std;
/*
* C++�����������ʱ��һ�����������
* 1��ʹ��һ���Ѵ�����ϵĶ�������ʼ��һ���¶���
* 2��ֵ���ݵķ�ʽ������������ֵ
* 3����ֵ��ʽ���ؾֲ�����
*/

class Person
{
public:
	Person();
	Person(int Age);
	Person(const Person& p);
	~Person();
	int m_Age;

private:

};

Person::Person()
{
	cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
}

Person::Person(int Age) {
	cout << "�вκ����ĵ���" << endl;
	m_Age = Age;
}

Person::Person(const Person& p) {
	cout << "�������캯���ĵ���" << endl;
	m_Age = p.m_Age;
}

Person::~Person()
{
	cout << "���������ĵ���" << endl;
}

// 1��ʹ��һ���Ѵ�����ϵĶ�������ʼ��һ���¶���
void test01() {
	Person p1(20);
	Person p2(p1);

	cout << "P2������Ϊ��  " << p2.m_Age << endl;
}

//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p) {
	//��������һ���µĶ���ֻ���ں�������ʹ�ã�����Ӱ��ʵ��
}

void test02() {
	Person p;
	doWork(p);
}

//3����ֵ��ʽ���ؾֲ�����
Person& doWork2() {
	Person p3;
	cout << &p3 << endl;
	return p3; //����P3�����¶��� ���ظ�test03
	
}

void test03() {
	Person p4 = doWork2();
	cout << &p4 << endl;
}

int main() {

	//test01();
	//test02();
	//doWork2();
	test03();

	system("pause");
	return 0;
}