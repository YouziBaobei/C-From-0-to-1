#include <iostream>
using namespace std;

class MyClass
{
public:
	MyClass() {//���캯�������󴴽��Զ�ִ�У�
		cout << "�㴴����һ������" << endl;
	};
	~MyClass() { //�������������������Զ�ִ�У�
		cout << "��������һ������" << endl;
	};

private:

};

int main() {
	MyClass M1;
	


	system("pause");
	return 0;
}