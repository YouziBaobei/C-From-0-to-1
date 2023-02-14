#include <iostream>
using namespace std;

class MyClass
{
public:
	MyClass() {//构造函数（对象创建自动执行）
		cout << "你创建了一个对象" << endl;
	};
	~MyClass() { //析构函数（对象销毁自动执行）
		cout << "你销毁了一个对象" << endl;
	};

private:

};

int main() {
	MyClass M1;
	


	system("pause");
	return 0;
}