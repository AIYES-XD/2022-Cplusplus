#include <iostream>
using namespace std;

//���ص��������

//�Զ������α���

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public :
	MyInteger()
	{
		m_Num = 0;
	}

	//����ǰ��++�����
	MyInteger& operator++()
	{
		//�Ƚ���++����
		m_Num++;

		//�ٷ���ֵ
		return *this;
	}
	//���غ���++�����
	MyInteger& operator++(int)
	{
		//�ȼ�¼��ʱ���
		MyInteger temp = *this;
		m_Num++;
		return temp;

	}


	


private:
	int m_Num;

};

//�������������
ostream& operator<<(ostream & cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test01()
{
	int a = 0;
	cout << ++a << endl;

	MyInteger myint;
	cout << myint++ << endl;
}

int main() {

}