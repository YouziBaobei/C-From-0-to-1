#include <iostream>
using namespace std;
/*
*	��̬��Ա����
*	1�����г�Ա����һ�����ݣ�A�޸ĺ� B������A�޸ĺ��ֵ��
*	2���ڱ���׶η����ڴ�	������û������֮ǰ���Ѿ������ˣ�������ȫ�����ڣ�
*	3�����������������ʼ��
*	
*	��̬��Ա����   (���÷Ǿ�̬��Ա������Ҫһ������)
*	1�����ж�����һ������
*	2����̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
*/

class Person
{
public:

	static int m_A; //��̬��Ա���������������� 

	void Printm_B() {
		cout << m_B << endl;
	}

private:
	static int m_B; //��̬��Ա����Ҳ���з���Ȩ�޵�

};

int Person::m_A = 100; //�����ʼ��
int Person::m_B = 200;

//void test01() {
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//};

void test02() {
	//��̬��Ա��������ĳ�������ϣ����ж��󶼹���һ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ

	//1��ͨ��������з��� p.m_A

	//2��ͨ���������з��� Person::m_A
	cout << Person::m_A << endl;
	
}


int main() {
	test02();

	system("pause");
	return 0;
}