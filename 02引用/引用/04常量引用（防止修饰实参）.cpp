#include <iostream>
using namespace std;
//�������ã����������βΣ���ֹ�����
void showValue(const int &val) {
	//val = 1000; ���������޸�
	cout <<"value = " << val << endl;
}


int main() {
	//int a = 10;

	//int& ref = 10;���ñ�������һ��Ϸ����ڴ�ռ䣨���ڴ��ַ�����ݣ�
	//const int & ref = 10; //����const֮�󣬱������������޸� int temp = 10 int & ref = temp;

	//const int& ref = 10;
	//ref = 20; //����const֮���ɳ�����ֻ�������޸�

	int a = 100;
	showValue(a);
	cout << "a = " << a << endl; //�����ڲ����޸� �ⲿ����Ҳ���޸�
	

	system("pause");
	return 0;
}