#include <iostream>
using namespace std;

// ��Ա���� �� ��Ա���� �ֿ��洢

class Person
{
public:
	int m_A; //�Ǿ�̬��Ա������������Ķ����ϵ�

	static int m_B; //��̬��Ա��������������Ķ���

	void func() {
		cout << "func �ĵ���" << endl; //��Ա��������������Ķ���
	}

	static void func2() {
		cout << "func2 �ĵ���" << endl; //��̬��Ա��������������Ķ���
	}

private:

};

int Person::m_B = 10;

void test01() {
	Person p;
	// �ն���ռ���ڴ�ռ�Ϊ��1�ֽ�
	//c++���������ÿһ���ն���Ҳ����һ���ֽڿռ䣬Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
};

void test02() {
	Person p;
	// int����ռ�ã�4���ֽ�
	cout << "size of p = " << sizeof(p) << endl;
}



int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}