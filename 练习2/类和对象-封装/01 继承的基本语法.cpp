#include <iostream>
using namespace std;

class BasePage
{
public :
	void header()
	{
		cout << "bcti" << endl;
	}
	void footer()
	{
		cout << "dibu" << endl;
	}
	void left()
	{
		cout << "zoce" << endl;
	}
};

class Normal : public BasePage
{
public :
	void content()
	{
		cout << "�ձ�����" << endl;
	}
};

void test01() 
{
	cout << "������normal����" << endl;
	Normal nor;
	nor.header();
	nor.left();
	nor.footer();
	nor.content();
}

int main() {
	test01();
}
