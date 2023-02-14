#include <iostream>
using namespace std;
/*
*	深拷贝与浅拷贝
*	浅拷贝：简单的复制拷贝
*	深拷贝：在堆区重新申请空间，进行拷贝操作
*/

class Person
{
public:
	Person() {
		cout << "Person的默认构造函数调用" << endl;
	};

	Person(int age,int height) {
 		m_Age = age;
		m_Height = new int(height);
		cout << "Person的有参构造函数的调用" << endl;
	};

	Person(const Person& p) { //浅拷贝-->简单的赋值操作
		m_Age = p.m_Age;
		//m_Height = p.m_Height; //编译器默认实现的代码，导致堆区数据重复释放
		
		//深拷贝操作
		m_Height = new int(*p.m_Height); //再次开辟内存空间
		cout << "Person的拷贝构造函数的调用" << endl;
	};

	
	~Person() {
		cout << "Person的析构函数的调用" << endl;
		//将堆区开辟的数据做释放操作
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
	};


public:
	int m_Age;
	int* m_Height; 
};

void test01() {
	Person p1(18,160);
	cout << "p1的年龄为： " << p1.m_Age << endl;
	cout << "p1的身高为： " << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2的年龄为： " << p2.m_Age << endl;
	cout << "p2的身高为： " << *p2.m_Height << endl;
}

int main() {

	test01();


	system("pause");
	return 0;
}