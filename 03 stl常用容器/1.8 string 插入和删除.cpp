#include<iostream>
using namespace std;

void testinsert()
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;
}

void testerase()
{
	string str = "h111ello";
	str.erase(1, 3);
	cout << str << endl;
}


int main()
{
	testinsert();
	testerase();
}