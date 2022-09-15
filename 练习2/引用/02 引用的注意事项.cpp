#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	//1.引用必须初始化
	//int &b;	//错误,必须要初始化
	int& b = a;
	//引用在初始化后,不可以改变
	int c = 20;

	//赋值操作,而不是更改引用
	b = c;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}