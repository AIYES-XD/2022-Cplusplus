#include<iostream>
using namespace std;

class Base1;
class Base2;
class Son;


class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};
class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};

class Son : public Base1, public Base2
{
public:
	Son() 
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test1()
{
	Son s;
	//当父类中出现同名成员,需要加作用域区分
	cout << s.Base1::m_A << s.m_C << s.m_D << endl;
}

int main() {
	test1();
}