#include<iostream>
using namespace std;

void test01()
{
	string str = "Hello";

	//ͨ��[]���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	//ͨ��at��ʽ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++) 
	{
		cout << str.at(i) << " ";
	}
	cout << endl;
}
void test02()
{
	string str = "Hello";
	str[0] = 'x';
	cout << "str = " << str << endl;
}

int main() {
	test01();
	test02();
}