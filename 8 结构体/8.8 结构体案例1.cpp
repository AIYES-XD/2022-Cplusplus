#include <iostream>
#include <ctime>
using namespace std;
/// <summary>
/// 学生结构体
/// </summary>
struct Student
{
	string sName;
	int score;
};
/// <summary> 
/// 教师结构体
/// </summary>
struct Teacher 
{
	string tName;
	//下属学生数组
	struct Student sArray[5];
};
//给老师和学生赋值的函数

void allocateSpace(struct Teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	for (int count = 0; count < len; count++) 
	{
		tArray[count].tName = "Teacher";
		tArray[count].tName += nameSeed[count];
		//通过循环给每名老师所带的学生赋值
		for (int countt = 0; countt < 5; countt++) 
		{
			tArray[count].sArray[countt].sName = "Student_";
			tArray[count].sArray[countt].sName += nameSeed[countt];
			//下面语句的意思是生成一个0~60的随机数,然后加40
			int random = rand() % 61 + 40;
			tArray[count].sArray[countt].score = random;
			
		}
	}
}
void printInfo(struct Teacher tArray[],int len) 
{
	for (int count = 0; count < len; count++) 
	{
		cout << "老师的姓名" << tArray[count].tName<<endl;
		for (int countt = 0; countt < 5; countt++) {
			cout<<"\t " << "第" << countt + 1 << "名学生的姓名是:" << tArray[count].sArray[countt].sName << "成绩是:" << tArray[count].sArray[countt].score << endl;
		}
		cout << endl;
	}
}
int main() {
	//随机数种子
	srand((unsigned int)time(NULL));
	//创建三个老师的数组
	struct Teacher tArray[3];

	//通过函数给3名老师的信息赋值,并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//打印所有老师及所带学生的信息
	printInfo(tArray, len);

}