#include <iostream>
using namespace std;
//��������صĸ��
//�����е�������������¶��壬��������һ�ֹ��ܣ�����Ӧ���õ���������

calss Person{
public:
	int m_A;
	int m_B;

public:
	Person PersonAddPerson(Person& p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.M_B = this->m_B + p.m_B;
		return temp;
	}
};


int main() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 


	system("pause");
	return 0;
}