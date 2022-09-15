#include <iostream>
using namespace std;

void test01()
{
	string str1 = "ÎÒ";

	str1 += "°®ÍæÓÎÏ·";
	

	string str2 = "LOL DNF";
	str2 += str1;
	cout << "str2 = " << str2 << endl;

	string str3 = "I ";
	str3.append("love game");
	cout << "str3 = " << str3 << endl;

	string str4 = "*";
	str4.append(str3,2);
	cout << "str4= " << str4 << endl;


}

int main()
{
	test01();
}