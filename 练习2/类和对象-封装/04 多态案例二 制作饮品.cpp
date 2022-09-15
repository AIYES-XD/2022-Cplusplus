#include <iostream>

using namespace std;

class AbstractDrinking
{
public:

	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomeThing() = 0;

	//������Ʒ
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
		cout << "�󿧷�ˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뿧�ȱ�" << endl;
	}

	//���븨��
	virtual void PutSomeThing()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}

};

class Tea : public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << "���ˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "�ݲ�" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "����豭" << endl;
	}

	//���븨��
	virtual void PutSomeThing()
	{
		cout << "�������" << endl;
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