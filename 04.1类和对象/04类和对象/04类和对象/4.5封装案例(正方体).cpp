#include <iostream>
using namespace std;

/*
	�����������ࣨCube��
	������������������
	�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

*/



class Cube
{

public:

	double m_H;//��
	double m_L;//��
	double m_W;//��

	double GetVolume() { //�������
		return m_H* m_L* m_W;
	}
	double GetArea() { //�������
		return m_H * m_L * 6;
	}
	bool Ifequal(double V1 , double V2) { //�ж����
		if (V1 == V2) {
			return 1;
		}
		else
		{
			return 0;
		}
	}

};

bool Ifequal(double V1, double V2) { //ȫ���ж����
	if (V1 == V2) {
		return 1;
	}
	else
	{
		return 0;
	}
}

int main() {


	Cube c1;
	cout << "�������һ�������εĳ���";
	cin >> c1.m_L;
	cout << "�������һ�������εĿ�:";
	cin >> c1.m_W;
	cout << "�������һ�������εĸߣ�";
	cin >> c1.m_H;

	Cube c2;
	cout << endl << "������ڶ��������εĳ���";
	cin >> c2.m_L; 
	cout << "������ڶ��������εĿ�:";
	cin >> c2.m_W;
	cout << "������ڶ��������εĸߣ�";
	cin >> c2.m_H;

	cout << endl << "��һ������������Ϊ�� " << c1.GetVolume() << endl;
	cout << "�ڶ�������������Ϊ�� " << c2.GetVolume() << endl;

	cout << endl << "��һ��������ı����Ϊ�� " << c1.GetArea() << endl;
	cout << "�ڶ���������ı����Ϊ�� " << c2.GetArea() << endl;
	
	if (c1.Ifequal(c1.GetVolume(), c2.GetVolume())) { //��Ա����
		cout << "\033[4;102m ����������������ȣ�����" << endl;
	}
	else
	{
		cout << "\033[4;101m ������������������ȣ�����" << endl;
	}

	cout << "\033[0m"; 

	if (Ifequal(c1.GetVolume(), c2.GetVolume())) { //ȫ�ֺ���
		cout << "\033[4;102m ����������������ȣ�����" << endl;
	}
	else
	{
		cout << "\033[4;101m ������������������ȣ�����" << endl;
	}


	cout << "\033[0m \7";
	system("pause");
	return 0;
}