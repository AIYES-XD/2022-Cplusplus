#include <iostream>
using namespace std;
#include <string>

//�������Ϊ���Ա

//�ֻ���

class Phone
{
public :
	Phone(string pName)
	{
		cout << "Phone�Ĺ��캯���ĵ���" << endl;
		m_PName = pName;
	}



	//�ֻ�Ʒ�Ƶ�����
	string m_PName;
};

//����
class Person
{
public:
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person�Ĺ��캯���ĵ���" << endl;
	}


public :
	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;
};

void test01()
{
	Person p("����","iphone");
	cout << p.m_Name << "��" << p.m_Phone.m_PName << endl;
}


int main() {
	test01();
}