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
	t.name = "����";
	t.age = 50;
	t.stu.name = "����";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << "��ʦ����" << t.name << "��ʦ�ı����" << t.id << "��ʦ��������" << t.age << endl;
	cout << "��ʦ����ѧ������" << t.stu.name << "����" << t.stu.age << "���Է���" << t.stu.score << endl;
};