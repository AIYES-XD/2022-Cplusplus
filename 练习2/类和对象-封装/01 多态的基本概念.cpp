#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "��˵��" << endl;

	}
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout << "����˵��" << endl;
	}
};

void dospeak(Animal &animal)
{
	animal.speak();

}

int main()
{
	Cat c;
	dospeak(c);

	Dog d;
	dospeak(d);
}