#include <iostream>
using namespace std;
/*
*	C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
*	����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
*/

//��ָ���ó�Ա���� 

class Person
{
public:
	void showClassName() {
		cout << "this is Person class" << endl;
	}
	
	void showPersonAge() {
		cout << "age = " << this->m_Age << endl; //�����ָ���ǿգ�����һ������
		/*
			�������쳣: ��ȡ����Ȩ�޳�ͻ��
			this �� nullptr��
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