#include <iostream>
#include<string>
using namespace std;

//�������Ϊ���Ա

	//�ֻ���
class Phone {

public:
	Phone(string pName) {
		m_pName = pName;
		cout << "Phone���캯������" << endl;

	}
	~Phone() {
		cout << "Phone����������" << endl;
	}
	string m_pName;
};


class Person {

	//�û���
public:
	Person(string name, string pName) : m_Name(name), m_Phone(pName){
		cout << "Person���캯������" << endl;
	};

	~Person() {
		cout << "Person����������" << endl;
	}

	string m_Name;
	Phone m_Phone;

};

//��������Ķ�����Ϊ����ĳ�Ա�������ʱ���ȹ���������Ķ����ٹ�������
//�������������ȹ��������������빹��˳���෴

void test01() {
	Person p("����", "Iphone13pro");
	cout << p.m_Name << "����" << p.m_Phone.m_pName << endl;
}


int main() {

	test01();

	system("pause");
	return 0;
}