#pragma once
#include <iostream>
using namespace std;


class Cir //���󡪡�Բ
{
public:
	void setCir(double& C_x11, double& C_y11);
		void setm_r(double& m_rr);
	void printCir();
	double Get_Cirx();
	double Get_Ciry();
	double Getm_r();
private:
	//����Բ������
	double C_x1;
	double C_y1;

	double m_r; //�뾶
};

class Spot //���󡪡�Բ
{
public:
	void setSpot(double& S_x11, double& S_y11);
	void printSpot();
	double Get_Spotx();
	double Get_Spoty();
private:
	//���õ�����
	double S_x1;
	double S_y1;
};

//�ж�Բ������λ�ù�ϵ
//void YuanYuDian(double x1,double x2 ,double y1 ,double y2, double m_r) {
//	double x = pow(x1 - x2, 2);
//	double y = pow(y1 - y2, 2);
//	double Lenth = sqrt(x + y);
//	cout << Lenth;
//	if (Lenth > m_r) {
//		cout << "����Բ�⣡����" << endl;
//	}
//	else if (Lenth == m_r) {
//		cout << "����Բ�ϣ�����" << endl;
//	}
//	else if (Lenth < m_r) {
//		cout << "����Բ�ڣ�����" << endl;
//		if (Lenth == 0) {
//			cout << "����Բ���غϣ�����" << endl;
//		}
//	}
//}