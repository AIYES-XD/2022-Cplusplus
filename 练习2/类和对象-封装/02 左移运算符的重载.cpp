#include <iostream>
using namespace std;

//左移运算符重载

class Person
{
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	//利用成员函数来重载左移运算符
	
private:
	int m_A;
	int m_B;

};
//利用全局函数重载左移运算符
ostream & operator<<(ostream& cout, Person& p)
{
	cout << " m_A = " << p.m_A << " m_B = " << p.m_B;
	return cout;
}

void test01()
{
	Person p;
	p.m_A = 10;
	p.m_B = 10;
	cout << p << endl;
}

int main() {
	test01();
}