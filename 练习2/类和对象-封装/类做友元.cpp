#include <iostream>
using namespace std;
#include <string>

//类做友元

//class Building;

class Building
{
	friend class GoodGuy;

public:
	Building();

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

class GoodGuy
{
public :

	GoodGuy();

	void visit();//参观函数访问Building中的属性

	Building* building;
};



void GoodGuy::visit()
{
	cout << "好基友这个类正在访问: " << building->m_SittingRoom << endl;
}



Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGuy::GoodGuy()
{
	building = new Building;
}

void test01()
{
	GoodGuy gg;
	gg.visit();
}

int main(){

	test01();
	cout << "helloworld";
}