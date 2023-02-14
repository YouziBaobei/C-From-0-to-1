#include <iostream>
using namespace std;

void func(int& a) {
	cout << "func（int &a）的调用" << endl;
}
void func(const int& a) {
	cout << "func（const int &a）的调用" << endl;
}

int main() {
	int a = 10;
	func(a);  //调用不加const
	func(10); //调用加const
	
	//因为10是只读的常量，更贴近const

	return 0;
}