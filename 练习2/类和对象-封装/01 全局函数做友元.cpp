#include <iostream>
using namespace std;
#include <string>

//��������
class Building
{
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";

	}


public :
	string m_SittingRoom;
private:
	string m_BedRoom;

};

//ȫ�ֺ���
void goodGuy(Building* building)
{
	cout << "ȫ�ֺ��� ���ڷ��� :" << building->m_SittingRoom << endl;
}

void test01()
{
	Building building;
	goodGuy(&building);
}

int main() {
	test01();
}