#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
		this->age = age;

	}
	Person& PersonAddPerson(Person &p)
	{
		this->age += p.age;
		//this��һ��ָ��p2��ָ��,��*thisָ��ľ������p2�ı���
		return*this;
	}
	int age;

	//ֵ��ʽ����ÿ�ζ��ᴴ��һ���µĶ���
	//���÷���ÿ�ζ���ԭ���Ǹ�
};

void test01() 
{
	Person p1(18);
	cout << "p1��������: " << p1.age << endl;

}

void test02() 
{

	Person p1(10);

	Person p2(10);

	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
	cout << "p2��������:" << p2.age << endl;
}

int main() {
	test01();
	test02();
}