#include <iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;

};
//将函数中的形参改为指针,可以减少内存空间占用
void printStudent(const student * s) {
	//加入const后,一旦有修改的操作就会报错,可以防止我们的误操作
	cout << "姓名" << s->name << "年龄" << s->age << "得分" << s->score << endl;
}

int main() {
	struct student s = { "张三",15,17 };
	//通过函数来打印结构体信息
	printStudent(&s);


}