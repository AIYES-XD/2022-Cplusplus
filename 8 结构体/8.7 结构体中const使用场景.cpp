#include <iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;

};
//�������е��βθ�Ϊָ��,���Լ����ڴ�ռ�ռ��
void printStudent(const student * s) {
	//����const��,һ�����޸ĵĲ����ͻᱨ��,���Է�ֹ���ǵ������
	cout << "����" << s->name << "����" << s->age << "�÷�" << s->score << endl;
}

int main() {
	struct student s = { "����",15,17 };
	//ͨ����������ӡ�ṹ����Ϣ
	printStudent(&s);


}