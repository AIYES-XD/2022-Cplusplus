#include <iostream>
using namespace std;
#include<string>

class Building;
class GoodGuy
{
public:

	GoodGuy();

	void visit();	//让visit函数可以访问Building中私有成员
	void visit2();	//让visit2函数不可以访问Building中私有成员

	Building* building;
};

class Building
{
	friend void GoodGuy::visit();

public:
	Building();

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

//类外实现成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGuy::GoodGuy()
{
	building = new Building;
}

void GoodGuy::visit()
{
	cout << "visit函数正在访问: " << building->m_SittingRoom << endl;
	cout << "visit函数正在访问: " << building->m_BedRoom << endl;
}

void GoodGuy::visit2()
{
	cout << "visit2函数正在访问: " << building->m_SittingRoom << endl;
}

void test01()
{
	GoodGuy gg;
	gg.visit();
	gg.visit2();
}

int main() {
	test01();
}