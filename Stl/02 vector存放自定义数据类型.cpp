#include<iostream>
using namespace std;
#include<vector>
#include <string>


class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};



void test01()
{
	vector<Person>v;
	Person p1("q", 10);
	Person p2("w", 20);
	Person p3("e", 30);
	Person p4("r", 40);
	Person p5("t", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名: " << it->m_Name << "年龄: " << it->m_Age << endl;
	}
}

void test02()
{
	vector<Person*>v;
	Person p1("q", 10);
	Person p2("w", 20);
	Person p3("e", 30);
	Person p4("r", 40);
	Person p5("t", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);


	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名: " << (*it)->m_Name << " 年龄: " << (*it)->m_Age << endl;
	}
}

int main()
{
	test01();
	test01();
}