#include <iostream>
using namespace std;
struct student
{
	string name;
	int age;
	int score;

};
void printStudent1(struct student s) {
	//�βθı䲻��ı��β�
	s.age = 100;
	cout << "�Ӻ���1�� ����:" << s.name << "����:" << s.age << "����" << s.score << endl;
}
void printStudent2(struct student *p) 
{
	//�ı�ָ��ָ���ַ��ֵ��ȫ�ֵ�
	p->age = 30;
	cout << "�Ӻ���2�� ����:" << p->name << " ����:" << p->age << " ����:" << p->score << endl;
}
int main() {
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;
	printStudent1(s);
	printStudent2(&s);
	cout << "main������ ����:" << s.name << "����:" << s.age << "����" << s.score << endl;

};