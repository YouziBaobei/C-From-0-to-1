#include <iostream>
using namespace std;

class Peoole
{
public:
	void Setp_Name(string name) { //设置姓名 可写
		p_Name = name;
	}

	string Getp_Name() {  // 可读
		return p_Name;
	}

	void Getp_Age() { //只读
		cout << "年龄： " << p_Age << endl;
	}

	void Setp_Lover(string lover_Name) { //可写
		 p_Lover = lover_Name;
	}


private:
	string p_Name ; //姓名 可读可写
	int p_Age = 18; //只读
	string p_Lover; //只写
};



int main() {
	Peoole Yuquancai;
	Yuquancai.Setp_Name("于泉材");
	string name = Yuquancai.Getp_Name();
	cout << "姓名: " << name << endl;
	Yuquancai.Getp_Age();
	Yuquancai.Setp_Lover("赵慧晶");


	system("pause");
	return 0;
}