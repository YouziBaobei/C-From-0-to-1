#include <iostream>
using namespace std;
/* 
*	���ַ��෽ʽ
*	1����������Ϊ �вι���|�޲ι���
*	2�������ͷ�Ϊ ��ͨ����|��������
* 
*	���ֵ��÷�ʽ
*	1�����ŷ�
*	2����ʾ��
*	3����ʽת����
*/

class MyClass
{
public:
	MyClass() { //�޲ι��캯��(Ĭ�Ϲ��캯��)
		cout << "MyClass���޲ι��캯������" << endl;
	};

	MyClass(int a) { //�вι��캯��
		age = a;
		cout << "MyClass���вι��캯������" << endl;
	};

	//�������캯��
	MyClass(const MyClass &M) { //���õķ�ʽ���� + const ��ֹ���������б��޸�
		cout << "MyClass�Ŀ������캯������" << endl;
		//������Ķ����������ԣ��������µĶ�����
		age = M.age;
	}

	~MyClass() { //��������
		cout << "MyClass��������������" << endl;
	};

	int age;

private:

};

void test01() {
	//1�����ŷ�
	MyClass M1; //Ĭ�Ϲ��캯���ĵ���
	MyClass M2(10); //�вι��캯���ĵ���
	MyClass M3(M2); //�������캯���ĵ���
	
	/*
	*           ע������
	* ����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
	* MyClass M1() ����> ���д������������Ϊ��һ������������;
	*   ^      ^  
	* ��������  ������
	*/


	//��������ĸ��ư���
	//cout << "M2������Ϊ�� " << M2.age <<endl;
	//cout << "M3������Ϊ�� " << M3.age << endl;

}

void test02() {
	//2����ʾ��
	MyClass M1; //Ĭ�Ϲ���
	MyClass M2 = MyClass(10);  //�вι���
	MyClass M3 = MyClass(M2);  //�������� 

	//MyClass(10) ����ִ�д���һ���������� �ص㣺��ǰ�н�����ϵͳ���������յ���������ִ������������
	//ע�������Ҫ�ÿ������캯������ʼ��һ����������

	// MyClass (M3);  ��MyClass M3��: �ض���   ����������Ϊ MyClass(M3) === MyClass M3;
}

void test03() {
	//3����ʽת����
	MyClass M1 = 10; //�൱�� MyClass M1 = MyClass (10)

	MyClass M2 = M1; //�൱�� MyClass M2 = MyClass (M1);
}


int main() {

	test03();


	system("pause");
	return 0;
}