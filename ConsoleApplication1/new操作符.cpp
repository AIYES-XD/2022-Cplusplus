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

	//�����������ɳ���Ա���ٺ͹����ͷ�
	//������ͷŶ���������,���ùؼ���delete
	delete p;
}
void test02()
{
	//�ڶ�������ʮ���������ݵ�����
	int* arr = new int[10];
	for (int count = 0; count < 10; count++)
	{
		arr[count] = count + 100;
	}
	for (int count = 0; count < 10; count++)
	{
		cout << arr[count] << endl;
	}
	//�ͷŶ�������
	//�ͷ������ʱ��,Ҫ��[]
	delete[] arr;
}

int main()
{
	test02();
}