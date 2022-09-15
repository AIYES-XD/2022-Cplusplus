#include <iostream>

using namespace std;
#include <string>

//������

class Animal
{
public:
	Animal()
	{
		cout << "����Animal�Ĺ��캯��" << endl;
	}

	//���麯��
	virtual void speak() = 0;

	/*virtual ~Animal()
	{
		cout << "����Animal����������" << endl;
	}*/
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "Animal�Ĵ�����������" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		m_Name = new string(name);
		cout << "����Cat�Ĺ��캯��" << endl;
	}

	virtual void speak()
	{
		cout <<*m_Name<< "xcmkzluohw" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "����Cat����������" << endl;
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