#include <iostream>
using namespace std;

//�����������ķ���ֵ
//1.��Ҫ���ؾֲ�����
int&  test01() //��"int"�����"&"�����÷���
{
	int a = 10;//�ֲ��������������е�ջ��
	return a;
}
int& test02()
{
	static int a = 10;
	return a;
}

//2.�����ĵ��ÿ�����Ϊ��ֵ����

int main() {
	int& ref2 = test02();
	cout << "ref2=" << ref2 << endl;
}