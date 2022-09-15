#include <iostream>
using namespace std;
#include <string>

//类对象作为类成员

//手机类

class Phone
{
public :
	Phone(string pName)
	{
		cout << "Phone的构造函数的掉用" << endl;
		m_PName = pName;
	}



	//手机品牌的名称
	string m_PName;
};

//人类
class Person
{
public:
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person的构造函数的调用" << endl;
	}


public :
	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
};

void test01()
{
	Person p("张三","iphone");
	cout << p.m_Name << "用" << p.m_Phone.m_PName << endl;
}


int main() {
	test01();
}