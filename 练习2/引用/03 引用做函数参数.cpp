#include <iostream>
using namespace std;

//��������

//1.ֵ����	�ββ�������ʵ��
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "01����" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}

//2.��ַ����	�βλ�����ʵ��
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	cout << "02����" << endl;
	cout << "a=" << &a << endl;
	cout << "b=" << &b << endl;
}

//3.���ô���	�βλ�����ʵ��
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	mySwap01(a, b);
	cout << "main����" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	mySwap02(&a, &b);
	cout << "main����" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	mySwap03(a,b);
	cout << "main����" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}