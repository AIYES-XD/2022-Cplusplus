#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		//this指针指向被调用的成员函数所属的对象
		this->age = age;

	}
	Person& PersonAddPerson(Person &p)
	{
		this->age += p.age;
		//this是一个指向p2的指针,而*this指向的就是这个p2的本体
		return*this;
	}
	int age;

	//值方式返回每次都会创建一个新的对象
	//引用返回每次都是原来那个
};

void test01() 
{
	Person p1(18);
	cout << "p1的年龄是: " << p1.age << endl;

}

void test02() 
{

	Person p1(10);

	Person p2(10);

	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
	cout << "p2的年龄是:" << p2.age << endl;
}

int main() {
	test01();
	test02();
}