#include <iostream>

using namespace std;

#include <fstream>


void test01()
{
	//1.����ͷ�ļ� fstream

	//2.����������

	ofstream ofs;

	//ָ���򿪷�ʽ
	ofs.open("test.txt",ios::out);

	ofs << "����" << endl;
	ofs << "��" << endl;
	ofs << "18" << endl;

	//�ر��ļ�
	ofs.close();

}

int main() {
	test01();
}