#include <iostream>
using namespace std;
/*
*	�����ǳ����
*	ǳ�������򵥵ĸ��ƿ���
*	������ڶ�����������ռ䣬���п�������
*/

class Person
{
public:
	Person() {
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	};

	Person(int age,int height) {
 		m_Age = age;
		m_Height = new int(height);
		cout << "Person���вι��캯���ĵ���" << endl;
	};

	Person(const Person& p) { //ǳ����-->�򵥵ĸ�ֵ����
		m_Age = p.m_Age;
		//m_Height = p.m_Height; //������Ĭ��ʵ�ֵĴ��룬���¶��������ظ��ͷ�
		
		//�������
		m_Height = new int(*p.m_Height); //�ٴο����ڴ�ռ�
		cout << "Person�Ŀ������캯���ĵ���" << endl;
	};

	
	~Person() {
		cout << "Person�����������ĵ���" << endl;
		//���������ٵ��������ͷŲ���
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
	};


public:
	int m_Age;
	int* m_Height; 
};

void test01() {
	Person p1(18,160);
	cout << "p1������Ϊ�� " << p1.m_Age << endl;
	cout << "p1�����Ϊ�� " << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2������Ϊ�� " << p2.m_Age << endl;
	cout << "p2�����Ϊ�� " << *p2.m_Height << endl;
}

int main() {

	test01();


	system("pause");
	return 0;
}