#include <iostream>
using namespace std;

/*
*	ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Ṳ��һ�����
*	���⣺��һ���������������Ǹ���������Լ����أ�
* 
*	C++ͨ������Ķ���ָ�룬thisָ�룬����������⡣	thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
* 
*	thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
*	thisָ�벻��Ҫ���壬ֱ��ʹ�ü���
* 
*	thisָ�����;��
*	1�����βκͳ�Ա��������ʱ������thisָ��������
*	2������ķǾ�̬��Ա�����з��ض�������ʹ�� return *this;
**/

class Person
{
public:

	Person(int age) { // 1��������Ƴ�ͻ
		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ��� Person p1 ���� Person(int age)
		this->age = age;
	};

	Person & PersonAddAge(Person &p) { //���õķ�ʽ����һֱ��p2���� �������&���ã��򷵻�һ���¶���p2��
		this->age += p.age;
		// this��ָ��p2����
		return *this;
	}
	 

	int age;

private:

};

void test01() {
	Person p1(18);
	cout << "P1������Ϊ �� " << p1.age << endl;
}

void test02() {
	Person p1(10);

	Person p2(10);

	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2������Ϊ�� " << p2.age << endl;
}

int main() {
	//test01();
	test02();

 	system("pause");
	return 0;
}