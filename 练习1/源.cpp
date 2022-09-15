#include <iostream>
using namespace std;
int main() {
	int a = 10, b = 15;
	a = a - b;
	b = b + a;
	a = b - a;
	cout << a << endl;
	cout << b << endl;
}