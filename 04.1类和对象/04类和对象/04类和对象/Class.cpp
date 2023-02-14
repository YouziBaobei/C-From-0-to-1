#include "Class.h"

void Cir::setCir(double& C_x11, double& C_y11) {
	C_x1 = C_x11;
	C_y1 = C_y11;
}

void Cir::setm_r(double& m_rr) {
	m_r = m_rr;
}

void Cir::printCir() {
	cout << "圆心坐标为：" << "(" << C_x1 << "," << C_y1 << ")" << endl;
}

double Cir::Get_Cirx() {
	return C_x1;
}

double Cir::Get_Ciry() {
	return C_y1;
}

double Cir::Getm_r() {
	return m_r;
}

void Spot::setSpot(double& S_x11, double& S_y11) {
	S_x1 = S_x11;
	S_y1 = S_y11;
}
void Spot::printSpot() {
	cout << "点坐标为：" << "(" << S_x1 << "," << S_y1 << ")" << endl;
}
double Spot::Get_Spotx() {
	return S_x1;
}

double Spot::Get_Spoty() {
	return S_y1;
}

