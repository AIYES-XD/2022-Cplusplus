#include <iostream>
using namespace std;

void test01()
{

	//���û����﷨
	//�������� &���� = ԭ��

	int a = 10;
	//��������
	int& b = a;

	cout << a << endl;
	cout << b << endl;

	b = 100;

	cout << a << endl;
	cout << b << endl;
}

int main()
{
	test01();
}