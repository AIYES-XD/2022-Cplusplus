#include <iostream>
using namespace std;

void showValue(const int & val) {
	//val = 100;
	cout << "val=" << val << endl;
}

int main() {

	//��������
	//ʹ�ó���:���������β�,��ֹ�����

	//int a = 10;
	//const int& ref = 10;//���ñ�������һ��Ϸ����ڴ�ռ�
	int a = 100;
	showValue(a);
}