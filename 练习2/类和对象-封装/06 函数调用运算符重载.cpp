#include <iostream>
using namespace std;
#include <string>

class MyPrint;
class MyAdd;

class MyPrint
{
public :
	void operator()(string test)
	{
		cout << test << endl;
	}
};

class MyAdd
{
public:
	int operator()(int num1,int num2)
	{
		return num1 + num2;
	}
};

void test01()
{
	MyPrint myPrint;
	myPrint("Hello World!");

}

void test02() {
	MyAdd myadd;
	int a = 10;
	int b = 20;
	int ret = myadd(a, b);
	cout << ret << endl;

	//匿名函数对象
	cout << MyAdd()(a, b) << endl;
}

int main() {
	test02();
}