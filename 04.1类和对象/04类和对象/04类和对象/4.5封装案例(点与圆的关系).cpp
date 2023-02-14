#include <iostream>
#include <math.h>
#include "Class.h"
using namespace std;
/*
	判断点与圆的关系
	圆心（X1，Y1），点（X2,Y2）
	√(x1-x1)²+(y1-y2)² = 点到圆心的距离
	半径 = m_r
	距离 = m_length
*/


void YuanYuDian(Spot &s , Cir &c) {
	double x = pow(c.Get_Cirx() - s.Get_Spotx(), 2);
	double y = pow(c.Get_Ciry() - s.Get_Spoty(), 2);
	double Lenth = sqrt(x + y);
	cout << Lenth;
	if ( Lenth == c.Getm_r()){
		cout << "点在圆上！！！" << endl;
	}
	else if (Lenth > c.Getm_r()) {
		cout << "点在圆外！！！" << endl;
	}
	else if (Lenth < c.Getm_r()) {
		cout << "点在圆内！！！" << endl;
		if (Lenth == 0) {
			cout << "且与圆心重合！！！" << endl;
		}
	}
}



int main() {
	while (true)
	{
		Cir c1;
		Spot s1;
		double x = 0, y = 0;
		double m_r;

		//手动输入设置圆心坐标
		cout << "请输入圆的坐标，输入第一个坐标后（回车 or 空格 or Tab键）输入第二个：";
		cin >> x >> y;
		c1.setCir(x, y);
		c1.printCir();

		//手动输入设置点坐标
		cout << "请输入点的坐标，输入第一个坐标后（回车 or 空格 or Tab键）输入第二个：";
		cin >> x >> y;
		s1.setSpot(x, y);
		s1.printSpot();

		//设置半径
		cout << "请输入圆的半径：";
		cin >> m_r;
		c1.setm_r(m_r);

		YuanYuDian(s1,c1);
		
		
		system("pause");
		system("cls");
	}


	system("pause");
	return 0;
}