#include <iostream>
using namespace std;

void func(int& a) {
	cout << "func��int &a���ĵ���" << endl;
}
void func(const int& a) {
	cout << "func��const int &a���ĵ���" << endl;
}

int main() {
	int a = 10;
	func(a);  //���ò���const
	func(10); //���ü�const
	
	//��Ϊ10��ֻ���ĳ�����������const

	return 0;
}