#include <iostream>
using namespace std;
//	��������صĸ��
//	�����е�������������¶��壬��������һ�ֹ��ܣ�����Ӧ���õ���������

//	�ؼ��֣�operator+

class Person{
public:
	int m_A;
	int m_B;

public:
	//Person operator+(Person& p) { //ͨ����Ա�������� + ��
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}
};

//Person operator+(Person& p1, Person& p2) { //ͨ��ȫ�ֺ������� + ��
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_B;
//	temp.m_B = p1.m_A + p2.m_B;
//	return temp;
//}

Person operator+(Person& p1, int num) { //ͨ��ȫ�ֺ������� + ��
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
	//��Ϊ������������������������
	//Person p3 = p1 + p2;

	Person p3 = p1 + 20; //Person + Num

	cout << "p3.m_A��ֵΪ��" << p3.m_A << endl;
	cout << "p3.m_B��ֵΪ��" << p3.m_B << endl;

	cout << 1 + 2 << endl;

	system("pause");
	return 0;
}