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
class Building;
class GoodGay {
public:
	GoodGay();

	void visit(); //�������Է���Building��˽�г�Ա

	void visit02(); //02�����Է���

	Building* building;
};
class Building {
void friend GoodGay::visit(); //���߱����� GoodGay�µ�visit��Ա���� ��Ϊ����ĺ����� ���Է���˽��
public:
	Building();

	string m_SettingRoom; //����
private:
	string m_BedRoom; //����
};
GoodGay::GoodGay() {
	building = new Building;
};
Building::Building() {
	m_SettingRoom = "����";
	m_BedRoom = "����";
};

void GoodGay::visit() {
	cout << "visit�������ڷ��ʣ�" << building->m_SettingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
};
void GoodGay::visit02() {
	cout << "visit02�������ڷ��ʣ�" << building->m_SettingRoom << endl;
	// cout << "visit02�������ڷ��ʣ�" << building->m_BedRoom << endl; //�޷����� private ��Ա
};
void test01() {
	GoodGay gg;
	gg.visit();
	gg.visit02();
};

int main() {
	test01();

	system("pause");
	return 0;
}