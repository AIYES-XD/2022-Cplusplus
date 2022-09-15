#include <iostream>
#include <ctime>
using namespace std;
struct Hero {
	//姓名
	string name;

	//年龄
	int age;

	//性别
	string sex;
};
//排序数组
void bubleSort(struct Hero heroArray[], int len) 
{
	for (int count = 0; count < len - 1; count++) 
	{
		for (int countt = 0; countt < len - count - 1; countt++) 
		{
			//如果countt下标的元素大于countt+1下标元素的年龄,交换两个元素
			if (heroArray[countt].age > heroArray[countt + 1].age) 
			{
				struct Hero temp = heroArray[countt];
				heroArray[countt] = heroArray[countt + 1];
				heroArray[countt + 1] = temp;
				//下面这行代码是没有排序时在控制台查看是否经过的测试代码
				//cout<<"测试" << endl;
			}
		}
	}
}
//输出数组
void printHero(struct Hero heroArray[], int len) 
{
	for (int count = 0; count < len; count++)
	{
		cout << "英雄姓名" << heroArray[count].name << "英雄年龄" << heroArray[count].age << "英雄性别" << heroArray[count].sex << endl;
	}
}
int main()  {
	//设计英雄的结构体,
	//创建数组存放五个英雄
	struct Hero heroArray[5] =
	{
		{"貂蝉",19,"女"},
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	printHero(heroArray, len);
	cout << endl;
	//对数组进行排序
	bubleSort(heroArray, len);

	//将排序后结果打印输出
	printHero(heroArray, len);

	
}