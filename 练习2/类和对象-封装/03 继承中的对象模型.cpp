#include <iostream>
using namespace std;

//�̳��еĶ���ģ��

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
	int m_D;
};

void test01()
{
	//�����еķǾ�̬��Ա���Զ������׼̳���ȥ
	cout << "size of Son " << sizeof(Son) << endl;
}



int main() {
	test01();
}