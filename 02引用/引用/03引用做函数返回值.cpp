#include <iostream>
using namespace std;
//��������������ֵ
//1.��Ҫ���ؾֲ������ĺ���

//2.�����ĵ��ÿ�����Ϊ��ֵ����

//3.�����Ǻ�����ֵ��ȡ������ַ�����ú�������ִ�к������ڲ�����

int &test01() {
	int a = 10; //�ֲ�����  ����������е�ջ��������ִ����Ϻ��ͷţ�
	return a;
}

int &test02() {
	static int a = 10; //static ȫ�ֱ���
	cout << "�������ڲ���ȡȫ�ֱ���a���ڴ��ַ = " << &a << endl;
	return a;
}

int test03() {
	static int b = 10;
	return b;
}


int main() {

	int &ref = test01();
	cout << "ref = " << ref << endl;  //�Ƿ��������ֲ�����a���ڴ��Ѿ����ͷ�

	
	int& ref2 = test02();

	cout << "ref2 = " << ref2 << endl; //ref2 = 10

	test02() = 1000; //���ú������ص���A�ı��� 

	cout << "test02() = " << &test02() << endl;

	ref2 = 2000;

	cout << "ref2 = " << ref2 << endl; //ref2 = 10





	//int c = 10;
	//int& d = c;
	//int& e = d;

	//cout << "������=" << e << endl; //���ã������� ���Զ��Ƕ��
	

	system("pause");
	return 0;
}