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
		cout << "普遍下载" << endl;
	}
};

void test01() 
{
	cout << "这里是normal界面" << endl;
	Normal nor;
	nor.header();
	nor.left();
	nor.footer();
	nor.content();
}

int main() {
	test01();
}
