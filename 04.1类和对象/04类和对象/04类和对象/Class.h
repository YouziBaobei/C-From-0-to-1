#pragma once
#include <iostream>
using namespace std;


class Cir //对象——圆
{
public:
	void setCir(double& C_x11, double& C_y11);
		void setm_r(double& m_rr);
	void printCir();
	double Get_Cirx();
	double Get_Ciry();
	double Getm_r();
private:
	//设置圆心坐标
	double C_x1;
	double C_y1;

	double m_r; //半径
};

class Spot //对象——圆
{
public:
	void setSpot(double& S_x11, double& S_y11);
	void printSpot();
	double Get_Spotx();
	double Get_Spoty();
private:
	//设置点坐标
	double S_x1;
	double S_y1;
};

//判断圆心与点的位置关系
//void YuanYuDian(double x1,double x2 ,double y1 ,double y2, double m_r) {
//	double x = pow(x1 - x2, 2);
//	double y = pow(y1 - y2, 2);
//	double Lenth = sqrt(x + y);
//	cout << Lenth;
//	if (Lenth > m_r) {
//		cout << "点在圆外！！！" << endl;
//	}
//	else if (Lenth == m_r) {
//		cout << "点在圆上！！！" << endl;
//	}
//	else if (Lenth < m_r) {
//		cout << "点在圆内！！！" << endl;
//		if (Lenth == 0) {
//			cout << "且与圆心重合！！！" << endl;
//		}
//	}
//}