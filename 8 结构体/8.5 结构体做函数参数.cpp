#include <iostream>
using namespace std;
struct student
{
	string name;
	int age;
	int score;

};
void printStudent1(struct student s) {
	//形参改变不会改变形参
	s.age = 100;
	cout << "子函数1中 姓名:" << s.name << "年龄:" << s.age << "分数" << s.score << endl;
}
void printStudent2(struct student *p) 
{
	//改变指针指向地址的值是全局的
	p->age = 30;
	cout << "子函数2中 姓名:" << p->name << " 年龄:" << p->age << " 分数:" << p->score << endl;
}
int main() {
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;
	printStudent1(s);
	printStudent2(&s);
	cout << "main函数中 姓名:" << s.name << "年龄:" << s.age << "分数" << s.score << endl;

};