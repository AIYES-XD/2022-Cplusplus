#include <iostream>

using namespace std;

#include <fstream>


void test01()
{
	//1.包含头文件 fstream

	//2.创建流对象

	ofstream ofs;

	//指定打开方式
	ofs.open("test.txt",ios::out);

	ofs << "张三" << endl;
	ofs << "男" << endl;
	ofs << "18" << endl;

	//关闭文件
	ofs.close();

}

int main() {
	test01();
}