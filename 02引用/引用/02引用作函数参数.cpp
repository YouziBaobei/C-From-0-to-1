#include <iostream>
using namespace std;

//��������

//1.ֵ����
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "mySwap01 ֵ���ݣ��βθı� " << endl;
	cout << "mySwap01 a=  " << a << endl; //ֵ���ݣ��βθı�
	cout << "mySwap01 b=  " << b << endl;
	cout << "\n" << endl;

 }
//2.��ַ����

void mySwap02(int* a, int* b) {
	int temp = * a;
	*a = *b;
	*b = temp;
	cout << "mySwap02 ��ַ���ݣ��βθı� " << endl;
	cout << "mySwap02 a=  " << *a << endl; //ֵ���ݣ��βθı�
	cout << "mySwap02 b=  " << *b << endl;
	cout << "\n" << endl;

}

//3.���ô��� 

void mySwap03(int& a, int& b) {
	int temp = a; 
	a = b;
	b = temp;
	cout << "mySwap03 ���ô��ݣ��βθı� " << endl;
	cout << "mySwap03 a=  " << a << endl; //ֵ���ݣ��βθı�
	cout << "mySwap03 b=  " << b << endl;
	cout << "\n" << endl;
}


int main() {
	int a = 10;
	int b = 20;

	//mySwap01(a, b); //ֵ���ݣ��ββ�������ʵ��
	//cout << "mySwap01 ֵ���ݣ�ʵ�β������ı� " << endl;
	//cout << "main a=  " << a << endl;
	//cout << "main b=  " << b << endl;
	//cout << "\n" << endl;

	//mySwap02(&a, &b); //��ַ���ݣ��βλ�����ʵ��
	//cout << "mySwap02 ��ַ���ݣ�ʵ�η����ı� " << endl;
	//cout << "main a=  " << a << endl;
	//cout << "main b=  " << b << endl;
	//cout << "\n" << endl;

	mySwap03(a, b); //���ô��ݣ��βλ�����ʵ��
	cout << "mySwap03 ���ô��ݣ�ʵ�η����ı� " << endl;
	cout << "main a=  " << a << endl;
	cout << "main b=  " << b << endl;
	cout << "\n" << endl;
	return 0;
}