#include <iostream>

using namespace std;
#include <string>

//虚析构

class Animal
{
public:
	Animal()
	{
		cout << "这是Animal的构造函数" << endl;
	}

	//纯虚函数
	virtual void speak() = 0;

	/*virtual ~Animal()
	{
		cout << "这是Animal的析构函数" << endl;
	}*/
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "Animal的纯虚析构函数" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		m_Name = new string(name);
		cout << "这是Cat的构造函数" << endl;
	}

	virtual void speak()
	{
		cout <<*m_Name<< "xcmkzluohw" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "这是Cat的析构函数" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	string* m_Name;
};

void test01()
{
	Animal* animal = new Cat("Tom ");
	animal->speak();
	delete animal;
}

int main()
{
	test01();
}