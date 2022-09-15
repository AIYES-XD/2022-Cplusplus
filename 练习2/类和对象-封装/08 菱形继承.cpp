#include <iostream>
using namespace std;

class Animal;
class Sheep;
class Tuo;
class SheepTuo;

class Animal
{
public :
	int m_Age;
};

// 利用虚继承 解决菱形继承的问题
// 继承之前加上关键字 virtual 变为虚继承
// Animal类称为 虚基类
//


class Sheep :virtual public Animal
{

};

class Tuo :virtual public Animal
{

};

class SheepTuo :public Sheep, public Tuo
{

};

void test01()
{
	SheepTuo st;
	st.m_Age = 10;
}

int main() {
	test01();
}