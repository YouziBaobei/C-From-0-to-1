#include <iostream>
using namespace std;

class Student
{
public: //����Ȩ��

	int Student_Number;
	string Student_Name;
	int Student_Age;
	string Student_Sex;

	int Print_Student() {
		cout << "ѧ�ţ�" << Student_Number << endl <<  "������" << Student_Name << endl << "���䣺" << Student_Age << endl << "�Ա�: " << Student_Sex << endl << endl;
		return 0;
	};

	//��������ֵ
	void setName(string name) {
		Student_Name = name;
	}

	//��ѧ�Ÿ�ֵ
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
	Stu01.Student_Name = "����";
	Stu01.Student_Age = 18;
	Stu01.Student_Sex = "��";
	Stu01.Print_Student();

	Student Stu02;
	Stu02.setName("����");
	Stu02.Student_Number = 230102;
	Stu02.Student_Age = 18;
	Stu02.Student_Sex = "��";
	Stu02.Print_Student();


	system("pause");
	return 0;

}