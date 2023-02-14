#include <iostream>
using namespace std;

/*
	设置立方体类（Cube）
	求出立方体的面积和体积
	分别用全局函数和成员函数判断两个立方体是否相等

*/



class Cube
{

public:

	double m_H;//高
	double m_L;//长
	double m_W;//宽

	double GetVolume() { //计算体积
		return m_H* m_L* m_W;
	}
	double GetArea() { //计算面积
		return m_H * m_L * 6;
	}
	bool Ifequal(double V1 , double V2) { //判断相等
		if (V1 == V2) {
			return 1;
		}
		else
		{
			return 0;
		}
	}

};

bool Ifequal(double V1, double V2) { //全局判断相等
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
	cout << "请输入第一个长方形的长：";
	cin >> c1.m_L;
	cout << "请输入第一个长方形的宽:";
	cin >> c1.m_W;
	cout << "请输入第一个长方形的高：";
	cin >> c1.m_H;

	Cube c2;
	cout << endl << "请输入第二个长方形的长：";
	cin >> c2.m_L; 
	cout << "请输入第二个长方形的宽:";
	cin >> c2.m_W;
	cout << "请输入第二个长方形的高：";
	cin >> c2.m_H;

	cout << endl << "第一个正方体的体积为： " << c1.GetVolume() << endl;
	cout << "第二个正方体的体积为： " << c2.GetVolume() << endl;

	cout << endl << "第一个正方体的表面积为： " << c1.GetArea() << endl;
	cout << "第二个正方体的表面积为： " << c2.GetArea() << endl;
	
	if (c1.Ifequal(c1.GetVolume(), c2.GetVolume())) { //成员函数
		cout << "\033[4;102m 两个正方体的体积相等！！！" << endl;
	}
	else
	{
		cout << "\033[4;101m 两个正方体的体积不相等！！！" << endl;
	}

	cout << "\033[0m"; 

	if (Ifequal(c1.GetVolume(), c2.GetVolume())) { //全局函数
		cout << "\033[4;102m 两个正方体的体积相等！！！" << endl;
	}
	else
	{
		cout << "\033[4;101m 两个正方体的体积不相等！！！" << endl;
	}


	cout << "\033[0m \7";
	system("pause");
	return 0;
}