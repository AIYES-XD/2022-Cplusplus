#include <iostream>
using namespace std;

int * func()
{
	//利用new关键字,可以将数据开辟到堆区
	//指针本质也是局部变量,放在栈上
	int* p = new int(10);
	return p;
}

int main()
{
	int* p = func();
	cout << *p << endl;
	//不会再编译后自动回收
	cout << *p << endl;
	cout << *p << endl;
}