#include <iostream>
using namespace std;
/*	
*	��̬��Ա����   (���÷Ǿ�̬��Ա������Ҫһ������)
*	1�����ж�����һ������
*	2����̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
*/

class Person
{
public:

	static void func() { //��̬��Ա����
		m_A = 100;//��̬��Ա���� ���Է���  ��̬��Ա����
		//m_B = 200; ��̬��Ա���� �����Է��� �Ǿ�̬��Ա���� 

		cout << "static void func ����" << endl;
	}

	//��̬��Ա����Ҳ�з���Ȩ��

	static int m_A;
	int m_B;
private:
	static void func2() {
		cout << "static void func2() �ĵ���" << endl;
	}

};

int Person::m_A = 0;



void test01() {
	//1�� ͨ������������
	Person p1;
	p1.func();

	//2��ͨ������������
	Person::func();
}


int main() {
	test01();

	system("pause");
	return 0;
}