#include <iostream>
using namespace std;
class Person
{
public:
	//公共权限
	string P_name;

protected:
	//保护权限
	string P_car;

private:
	//私有权限
	int P_password;

public:
	void func() {
		P_name = "张三";
		P_car = "拖拉机";
		P_password = 123456;
	}
};

int main() {

	Person p1;
	p1.func();
	p1.P_name = "李四";
	p1.P_car = "劳斯莱斯"; //保护权限 类外不可访问
	p1.P_password = 333555; //私有权限 类外不可访问
	system("pause");
	return 0;
}