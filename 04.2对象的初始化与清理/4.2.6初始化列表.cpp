#include <iostream>
using namespace std;

class Person
{
public:
	//Person() :m_Age(10), m_Height(160) {};
	Person(int a, int b) :m_Age(a), m_Height(b) {};
	~Person() {};

public:
	int m_Age;
	int m_Height;
private:

};

void test01() {
	Person p(10,160);
	cout << "p的年龄为： " << p.m_Age << endl << "p的身高为： " << p.m_Height << endl;
}


int main() {

	test01();

	system("pause");
	return 0;
}