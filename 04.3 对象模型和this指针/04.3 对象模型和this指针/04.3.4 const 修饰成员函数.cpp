#include <iostream>
using namespace std;
/*
*	��������
*	1����Ա�������const�����ǳ��������Ϊ������
*	2���������ڲ������޸ĳ�Ա����
*	3����Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
* 
*	������
*	1����������ǰ��const�Ƹö���Ϊ������
*	2��������ֻ�ܵ��ó�����
*	
*/
class Person
{
public:
	Person(int age, int m_B) :m_Age(age), m_Height(m_B) {};

	//thisָ�뱾�� ��ָ�볣�� ָ���ָ�򲻿��޸�
	//�൱�� Person * const this; �����޸�ָ���ֵ
	// 
	//�ڳ�Ա���������const�����ε���thisָ�룬��ָ���ֵҲ�������޸�
	//cont Person * const this; ֻ��ָ��Person --->������
	void func() const { //������

		this->m_Height = 180;
		//this->m_Age = 20;
		//this = NULL; //thisָ�벻���޸�ָ��

		cout << "Age��" << m_Age << endl;
		cout << "Height��" << m_Height << endl;
		cout << "����������" << endl;
	};

	void func02() { //��ͨ���� 
		m_Age = 100;
		cout << "func02 �ĵ��� " << endl;
	}

	 int m_Age; //������ �����޸�

	 mutable int m_Height; //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ

};

void test01() {
	Person p(10,160);
	p.func();
}

void test02() {
	const Person p(12, 180); //������
	//p.m_Age = 100;
	p.m_Height = 100;  //����ֵ �ڳ�������Ҳ�����޸�
	//p.func02();������ �޷�������ͨ���� ��Ϊ��ͨ��Ա���������޸�����
}

int main() {
	test02();

	system("pause");
	return 0;
}