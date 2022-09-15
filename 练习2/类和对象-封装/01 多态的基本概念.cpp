#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "在说话" << endl;

	}
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout << "狗在说话" << endl;
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