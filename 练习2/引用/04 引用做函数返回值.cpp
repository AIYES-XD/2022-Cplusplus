#include <iostream>
using namespace std;

//引用做函数的返回值
//1.不要返回局部变量
int&  test01() //在"int"后面加"&"是引用返回
{
	int a = 10;//局部变量存在四区中的栈区
	return a;
}
int& test02()
{
	static int a = 10;
	return a;
}

//2.函数的调用可以作为佐值存在

int main() {
	int& ref2 = test02();
	cout << "ref2=" << ref2 << endl;
}