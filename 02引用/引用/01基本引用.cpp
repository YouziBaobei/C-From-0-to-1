#include <iostream>
using namespace std;

int main() {
	//���õĻ����﷨
	//�������� & ���� = ԭ��
	int a = 10;
	int& b = a;
	b = 20;
	cout << a << endl;
	cout << &a << endl;   //ͬһ���ڴ��ַ
	cout << &b << endl;

	/*
		����ע������
		1.���ñ���Ҫ��ʼ������
		2.һ����ʼ���󣬾Ͳ��ܸ�������Ŀ��  XXX int &b = a 
		3.��ֵ����  XXX b = c 
	*/



	system("pause");
	return 0;
}