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

// ������̳� ������μ̳е�����
// �̳�֮ǰ���Ϲؼ��� virtual ��Ϊ��̳�
// Animal���Ϊ �����
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