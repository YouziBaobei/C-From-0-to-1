#include <iostream>
using namespace std;

class Peoole
{
public:
	void Setp_Name(string name) { //�������� ��д
		p_Name = name;
	}

	string Getp_Name() {  // �ɶ�
		return p_Name;
	}

	void Getp_Age() { //ֻ��
		cout << "���䣺 " << p_Age << endl;
	}

	void Setp_Lover(string lover_Name) { //��д
		 p_Lover = lover_Name;
	}


private:
	string p_Name ; //���� �ɶ���д
	int p_Age = 18; //ֻ��
	string p_Lover; //ֻд
};



int main() {
	Peoole Yuquancai;
	Yuquancai.Setp_Name("��Ȫ��");
	string name = Yuquancai.Getp_Name();
	cout << "����: " << name << endl;
	Yuquancai.Getp_Age();
	Yuquancai.Setp_Lover("�Ի۾�");


	system("pause");
	return 0;
}