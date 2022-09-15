#include <iostream>
using namespace std;

//重载递增运算符

//自定义整形变量

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public :
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置++运算符
	MyInteger& operator++()
	{
		//先进行++运算
		m_Num++;

		//再返回值
		return *this;
	}
	//重载后置++运算符
	MyInteger& operator++(int)
	{
		//先记录当时结果
		MyInteger temp = *this;
		m_Num++;
		return temp;

	}


	


private:
	int m_Num;

};

//重载左移运算符
ostream& operator<<(ostream & cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test01()
{
	int a = 0;
	cout << ++a << endl;

	MyInteger myint;
	cout << myint++ << endl;
}

int main() {

}