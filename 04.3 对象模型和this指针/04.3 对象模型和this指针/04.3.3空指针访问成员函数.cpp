#include <iostream>
using namespace std;
/*
*	C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
*	如果用到this指针，需要加以判断保证代码的健壮性
*/

//空指调用成员函数 

class Person
{
public:
	void showClassName() {
		cout << "this is Person class" << endl;
	}
	
	void showPersonAge() {
		cout << "age = " << this->m_Age << endl; //传入的指针是空，不是一个对象
		/*
			引发了异常: 读取访问权限冲突。
			this 是 nullptr。
		*/
	}

	int m_Age;

};

void test01() {
	Person *p = NULL;
	//p->showClassName();
	p->showPersonAge();
}

int main() {
	test01();

	system("pause");
	return 0;
}