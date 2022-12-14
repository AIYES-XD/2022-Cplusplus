#include <iostream>
using namespace std;

//交换函数

//1.值传递	形参不会修饰实参
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "01函数" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}

//2.地址传递	形参会修饰实参
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	cout << "02函数" << endl;
	cout << "a=" << &a << endl;
	cout << "b=" << &b << endl;
}

//3.引用传递	形参会修饰实参
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
	cout << "main函数" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	mySwap02(&a, &b);
	cout << "main函数" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	mySwap03(a,b);
	cout << "main函数" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}