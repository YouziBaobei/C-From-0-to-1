#include <iostream>
#include <string>
using namespace std;

/*	��Ԫ�Ĺؼ����� friend
	�ڳ�������Щ˽�����ԣ�Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ����
	��Ԫ��Ŀ�ľ�����һ���������� ������һ������˽�г�Ա

	��Ԫ������ʵ�֡�����
	1��ȫ�ֺ�������Ԫ
	2��������Ԫ
	3����Ա��������Ԫ
*/

class Building { //������

	friend void GoodGay(Building& building); //��Ԫ������

public:
	Building() {
		m_sittingRoom = "����";
		m_BedRoom = "����";
	};

public:
	string m_sittingRoom; //����
private:
	string m_BedRoom; //����
};

//ȫ�ֺ���
void GoodGay(Building &building) {
	cout << "�û��ѵ�ȫ�ֺ��������ڷ��� �� " << building.m_sittingRoom << endl;
	cout << "�û��ѵ�ȫ�ֺ��������ڷ��� �� " << building.m_BedRoom << endl;
}

void test01(){
	Building building;
	GoodGay(building);
}

int main() {
	test01();

	system("pause");
	return 0;
}