#include <iostream>
using namespace std;

class Student
{
public: //公共权限

	int Student_Number;
	string Student_Name;
	int Student_Age;
	string Student_Sex;

	int Print_Student() {
		cout << "学号：" << Student_Number << endl <<  "姓名：" << Student_Name << endl << "年龄：" << Student_Age << endl << "性别: " << Student_Sex << endl << endl;
		return 0;
	};

	//给姓名赋值
	void setName(string name) {
		Student_Name = name;
	}

	//给学号赋值
	void setNumber(int number) {
		Student_Number = number;
	}
	
	Student();
	~Student();

private:

};

Student::Student()
{
}

Student::~Student()
{
}



int main() {
	Student Stu01;
	Stu01.Student_Number = 230101;
	Stu01.Student_Name = "张三";
	Stu01.Student_Age = 18;
	Stu01.Student_Sex = "男";
	Stu01.Print_Student();

	Student Stu02;
	Stu02.setName("李四");
	Stu02.Student_Number = 230102;
	Stu02.Student_Age = 18;
	Stu02.Student_Sex = "男";
	Stu02.Print_Student();


	system("pause");
	return 0;

}