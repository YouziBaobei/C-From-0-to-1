//��װ��c++����������������֮һ
//��װ�����壺
	// �������Ժ���Ϊ��Ϊһ������
	// �������Ժ���Ϊ����Ȩ�޿���
//��������ʱ�����Ժ���Ϊд��һ��
//�﷨��class ����{����Ȩ�� : ���� / ��Ϊ};

/*
��װ������������еİ����ݺͲ������ݵĺ�������һ���һ����������ܱ����ܵ����ĸ��ź����ã��Ӷ�ȷ���˰�ȫ�����ݷ�װ���������һ����Ҫ�� OOP �������������
���ݷ�װ��һ�ְ����ݺͲ������ݵĺ���������һ��Ļ��ƣ����ݳ�����һ�ֽ����û���¶�ӿڶ��Ѿ����ʵ��ϸ�����������Ļ��ơ�
C++ ͨ����������֧�ַ�װ���������أ�public��protected��private��
�����˽�г�Ա��private����������Ա��protected���͹��г�Ա��public����Ա
Ĭ������£������ж����������Ŀ����˽�е�
*/

#include <iostream>
using namespace std;
const double PI = 3.14;


//���һ��Բ�࣬���ܳ�

class Yuan
{
public:
	double Yuan_Banjing;

	double Yuan_Zhouchang() {
		return Yuan_Banjing * 2 * PI;
	}

private:

};


int main() {
	Yuan yuan01;
	yuan01.Yuan_Banjing = 10;
	cout << "Բ���ܳ�Ϊ�� " << yuan01.Yuan_Zhouchang() << endl;


	system("pause");
	return 0;
}