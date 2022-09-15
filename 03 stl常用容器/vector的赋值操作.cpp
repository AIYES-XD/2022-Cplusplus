#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
}

int main() {
	test01();
}