#include <iostream>
using namespace std;

int* func()
{
	int* p = new int(10);
	return p;
}
 
void test01()
{
	int* p = func();
	cout << *p << endl;

	//堆区的数据由程序员开辟和管理释放
	//如果想释放堆区的数据,利用关键字delete
	delete p;
}
void test02()
{
	//在堆区创建十个整形数据的数组
	int* arr = new int[10];
	for (int count = 0; count < 10; count++)
	{
		arr[count] = count + 100;
	}
	for (int count = 0; count < 10; count++)
	{
		cout << arr[count] << endl;
	}
	//释放堆区数组
	//释放数组的时候,要加[]
	delete[] arr;
}

int main()
{
	test02();
}