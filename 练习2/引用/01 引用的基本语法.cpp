#include <iostream>
using namespace std;

void test01()
{

	//引用基本语法
	//数据类型 &别名 = 原名

	int a = 10;
	//创建引用
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