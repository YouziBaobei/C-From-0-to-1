#include<iostream>
using namespace std;

int  * func() {
	//����new�ؼ���  ���Խ����ݿ��ٵ����� 
	//new���� ==�� ���������͵�ָ��
	
	int * p = new int(1234);  
	//new��ʲô�������� ��ʲô�������͵�ָ��ȥ����

	return p;
}


int main() {
	//�ڶ�����������
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	cout << *p << endl;
	system("pause");
	return 0;
}