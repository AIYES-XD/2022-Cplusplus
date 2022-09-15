#include <iostream>
using namespace std;

#include <string>

string const BackLowConstStr()
{
	string const str = "abcde";
	return str;
}
string BackStr()
{
	string str = "abcdefgh";
	return str;
}


void testfind(string const str)
{

	int pos = str.find("de");

	if (pos == -1) 
	{
		cout << "Î´µ½×Ö·û´®" << endl;
	}
	else
	{
		cout << "ÕÒµ½×Ö·û´®,pos= " << pos << endl;
	}
}

void testrfind(string const str) 
{
	int pos = str.rfind("de");

	if (pos == -1)
	{
		cout << "Î´µ½×Ö·û´®" << endl;
	}
	else
	{
		cout << "ÕÒµ½×Ö·û´®,pos= " << pos << endl;
	}
	}

void testallfind()
{
	testfind(BackLowConstStr());
	testrfind(BackLowConstStr());
}

void testreplace(string  str)
{
	str.replace(1,3,"1111");
	cout << "str = " << str << endl;
}

int main() {
	testallfind();
	testreplace(BackStr());
}