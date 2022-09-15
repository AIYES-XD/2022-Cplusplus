#include <iostream>

using namespace std;

class AbstractDrinking
{
public:

	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加入辅料
	virtual void PutSomeThing() = 0;

	//制作饮品
	void makeDrink() 
	{
		Boil();
		Brew();
		PourInCup();
		PutSomeThing();
	}
};

class Coffee : public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << "煮咖啡水" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入咖啡杯" << endl;
	}

	//加入辅料
	virtual void PutSomeThing()
	{
		cout << "加入糖和牛奶" << endl;
	}

};

class Tea : public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << "煮茶水" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "泡茶" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入茶杯" << endl;
	}

	//加入辅料
	virtual void PutSomeThing()
	{
		cout << "加入枸杞" << endl;
	}

};

void doWork(AbstractDrinking* abs)
{
	abs->makeDrink();
	delete abs;
}

void test01()
{
	doWork(new Coffee);

	doWork(new Tea);
}

int main() {
	test01();
}