#include <iostream>
using namespace std;
#include <string>

//������Ԫ

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

	void visit();//�ιۺ�������Building�е�����

	Building* building;
};



void GoodGuy::visit()
{
	cout << "�û�����������ڷ���: " << building->m_SittingRoom << endl;
}



Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
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