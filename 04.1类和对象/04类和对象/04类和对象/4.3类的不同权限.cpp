#include <iostream>
using namespace std;
class Person
{
public:
	//����Ȩ��
	string P_name;

protected:
	//����Ȩ��
	string P_car;

private:
	//˽��Ȩ��
	int P_password;

public:
	void func() {
		P_name = "����";
		P_car = "������";
		P_password = 123456;
	}
};

int main() {

	Person p1;
	p1.func();
	p1.P_name = "����";
	p1.P_car = "��˹��˹"; //����Ȩ�� ���ⲻ�ɷ���
	p1.P_password = 333555; //˽��Ȩ�� ���ⲻ�ɷ���
	system("pause");
	return 0;
}