#include <iostream>
using namespace std;
//1. 构造函数的分类以及调用
//分类
//按照参数分类 无参和有参 构造

class Person
{
public:
	Person()
	{
		cout << "Person的无参构造函数的调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p)
	{
		//将传入的人的所有属性,拷贝到我身上
		cout << "Person的拷贝构造函数的调用" << endl;
		age = p.age;
	}
	~Person()
	{
		cout << "Person的析构函数的调用" << endl;

	}
	
	int age;
};

//括号法
void test01() 
{
	
	Person p1;
	Person p2(10);
	Person p3(p2);

	cout << "p2的年龄为: " << p2.age << endl;
	cout << "p3的年龄为: " << p3.age << endl;
}

//2. 显示法
void test02()
{
	Person p1;
	Person p2 = Person(10);//有参构造
	Person p3 = Person(p2);//拷贝构造

	Person(10);//在这里是临时的匿名对象 特点:当前行结束后,系统会立即回收匿名对象
	//放在等号右边就是
	//不要利用拷贝构造函数 初始化匿名对象 编译器会认为是将对象重定义

}
void test03() 
{
	Person p1 = 10;		//相当于写了 Person p4 = Person(10);  有参构造
	Person p2 = p1;

}

int main() {
	//test01();
	test02();
}