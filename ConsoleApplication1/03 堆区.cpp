#include <iostream>
using namespace std;

int * func()
{
	//����new�ؼ���,���Խ����ݿ��ٵ�����
	//ָ�뱾��Ҳ�Ǿֲ�����,����ջ��
	int* p = new int(10);
	return p;
}

int main()
{
	int* p = func();
	cout << *p << endl;
	//�����ٱ�����Զ�����
	cout << *p << endl;
	cout << *p << endl;
}