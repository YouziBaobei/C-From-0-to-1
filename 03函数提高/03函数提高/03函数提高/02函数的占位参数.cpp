#include <iostream>
using namespace std;
// �﷨������ֵ ������ ���������ͣ�{}
int func(int a,int) {
	cout << "This is func." << endl;
	return 0;
}
int main() {

	//func();   ��func��: ���������� 0 ������
	func(10,20);//���봫��int��������
	system("pause");
	return 0;
}