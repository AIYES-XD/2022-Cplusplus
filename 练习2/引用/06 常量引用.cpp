#include <iostream>
using namespace std;

void showValue(const int & val) {
	//val = 100;
	cout << "val=" << val << endl;
}

int main() {

	//常量引用
	//使用场景:用来修饰形参,防止误操作

	//int a = 10;
	//const int& ref = 10;//引用必须引用一块合法的内存空间
	int a = 100;
	showValue(a);
}