#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	//1.���ñ����ʼ��
	//int &b;	//����,����Ҫ��ʼ��
	int& b = a;
	//�����ڳ�ʼ����,�����Ըı�
	int c = 20;

	//��ֵ����,�����Ǹ�������
	b = c;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}