#include <iostream>
using namespace std;

//���캯�����ù���
//1.����һ����,C++���������ÿ���඼���������������
	//Ĭ�Ϲ���	(��ʵ��)
	//��������	(��ʵ��)
	//��������	(ֵ����)

//2.�������Ъ���вι��캯��,�������Ͳ����ṩĬ�Ϲ���,��Ȼ�ṩ��������

//3.�������д�˿������캯��,�������Ͳ����ṩ��������

class Person
{
public :
	/*Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}*/
	Person(int age)
	{
		cout << "Person���вι��캯������";
		m_Age = age;
	}
	Person(const Person& p) 
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}
	~Person()
	{
		cout << "Person��Ĭ��������������" << endl;
	}

	int m_Age;
};

//void test01() 
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2��������" << p2.m_Age << endl;
//}

void test02()
{
	Person p;
}

int main() {
	//test01();
	test02();
}