#include <iostream>
using namespace std;
//1. ���캯���ķ����Լ�����
//����
//���ղ������� �޲κ��в� ����

class Person
{
public:
	Person()
	{
		cout << "Person���޲ι��캯���ĵ���" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯���ĵ���" << endl;
	}
	//�������캯��
	Person(const Person &p)
	{
		//��������˵���������,������������
		cout << "Person�Ŀ������캯���ĵ���" << endl;
		age = p.age;
	}
	~Person()
	{
		cout << "Person�����������ĵ���" << endl;

	}
	
	int age;
};

//���ŷ�
void test01() 
{
	
	Person p1;
	Person p2(10);
	Person p3(p2);

	cout << "p2������Ϊ: " << p2.age << endl;
	cout << "p3������Ϊ: " << p3.age << endl;
}

//2. ��ʾ��
void test02()
{
	Person p1;
	Person p2 = Person(10);//�вι���
	Person p3 = Person(p2);//��������

	Person(10);//����������ʱ���������� �ص�:��ǰ�н�����,ϵͳ������������������
	//���ڵȺ��ұ߾���
	//��Ҫ���ÿ������캯�� ��ʼ���������� ����������Ϊ�ǽ������ض���

}
void test03() 
{
	Person p1 = 10;		//�൱��д�� Person p4 = Person(10);  �вι���
	Person p2 = p1;

}

int main() {
	//test01();
	test02();
}