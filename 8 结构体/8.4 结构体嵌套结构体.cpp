#include <iostream>
#include <string>
using namespace std;



struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;

};

int main()
{
	teacher t;
	t.id = 1;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "张三";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << "老师姓名" << t.name << "老师的编号是" << t.id << "老师的年龄是" << t.age << endl;
	cout << "老师辅导学生姓名" << t.stu.name << "年龄" << t.stu.age << "考试分数" << t.stu.score << endl;
};