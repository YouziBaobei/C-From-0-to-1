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

class Building; // GoodGay���д�����Building���� ������Ҫ��ǰ����
class GoodGay { //������Ԫ
public:
	GoodGay();
	Building* building;
public:
	void visit(); //�ιۺ��� ����Building�е�����
private:
	
};

class Building
{
	friend class GoodGay;//GoodGay�Ǳ���ĺ����� ���Է��ʱ����˽�г�Ա
public:
	Building();
public:
	string m_SittingRoom; //����
private:
	string m_BedRoom; //����
};

//����д��Ա����
Building::Building() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
GoodGay::GoodGay() {
	building = new Building;//����һ��Building���� -> buiding��ָ������ ������Ҫnew�ؼ���������

};

void GoodGay::visit() {
	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;;
	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;;
};

void test01() {
	GoodGay gg;
	gg.visit();
}

int main() { 
	test01();

	system("pause");
	return 0;
}