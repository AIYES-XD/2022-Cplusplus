#include <iostream>
#include <string>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
int main()
{
	//�����ṹ�����
	struct student s = {"����",18,100};

	//ͨ��ָ��ָ��ṹ�����
	struct student* p = &s;

	//ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ��,���ʽṹ���е�����,��Ҫ����'->'
	cout <<"����" << p->name <<"����"<<p->age <<"�ɼ�"<<p->score << endl;
}