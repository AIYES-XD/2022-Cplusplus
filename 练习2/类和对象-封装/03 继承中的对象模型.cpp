#include <iostream>
using namespace std;

//继承中的对象模型

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
	int m_D;
};

void test01()
{
	//父类中的非静态成员属性都被自雷继承下去
	cout << "size of Son " << sizeof(Son) << endl;
}



int main() {
	test01();
}