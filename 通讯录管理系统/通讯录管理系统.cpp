#include <iostream>
#include <ctime>
using namespace std;
#define MAX 1000

//设计联系人结构体
struct Person
{
	//姓名
	string m_Name;
	//性别
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};
//设计通讯录结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int m_Size;
};

//1.添加联系人
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否已满,如果已满就不在添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满,无法添加!" << endl;
		return;
	}
	else
	{
		//添加具体的联系人
		//姓名
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别
		cout << "请输入性别:" << endl;
		cout << "1.---男" << endl;
		cout << "2.---女" << endl;
		int sex = 0;
		while (true) 
		{
			//如果输入的数据正确,退出循环,输入错误,则重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误,请重新输入" << endl;
		}
		
		//年龄
		cout << "请输入年龄:" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//电话
		cout << "请输入电话:" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//住址
		cout << "请输入住址:" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;

		system("pause");//按任意键继续
		system("cls");//清屏操作
	}
	
}

//2.显示联系人
void showPerson(Addressbooks * abs)
{
	//判断通讯录中人数是否为零,如果为零,提示记录为空
	//如果不为零,显示记录的联系人信息
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else 
	{
		for (int count = 0; count < abs->m_Size; count++) 
		{
			cout << "姓名:" << abs->personArray[count].m_Name << "\t";
			cout << "性别:" << (abs->personArray[count].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄:" << abs->personArray[count].m_Age << "\t";
			cout << "电话:" << abs->personArray[count].m_Phone << "\t";
			cout << "住址:" << abs->personArray[count].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//菜单界面
void shouMenu() {
	cout << "******************" << endl;
	cout << "***1.添加联系人***" << endl;
	cout << "***2.显示联系人***" << endl;
	cout << "***3.删除联系人***" << endl;
	cout << "***4.查找联系人***" << endl;
	cout << "***5.修改联系人***" << endl;
	cout << "***6.清空联系人***" << endl;
	cout << "***0.退出通讯录***" << endl;
	cout << "******************" << endl;
}

//检测联系人是否存在,如果存在,返回联系人所在数组中的具体位置,不存在返回-1
int isExist(Addressbooks *abs,string name) 
{
	for(int count =0 ; count < abs->m_Size;count++)
	{
		// 利用冒泡排序查找用户输入的姓名
		if (abs->personArray[count].m_Name == name)
		{
			return count;

		}
	}
	//遍历结束后也没有找到,返回-1
	return -1;

}

//3.删除指定联系人
void deletPerson(Addressbooks * abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//查找到此人,执行删除操作
		for (int count = 0; count < abs->m_Size; count++)
		{
			//数据迁移
			abs->personArray[count] = abs->personArray[count + 1];	
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
}

int main() {
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;
	
	//创建用户选择记录变量
	int select = 0;

	////菜单调用
	//shouMenu();

	//cin >> select;
	while (true) {
		//菜单调用
		shouMenu();
		cin >> select;

		switch(select) {
		case 1:		//添加联系人
			addPerson(&abs);//利用地址传递,可以修饰实参
			break;
		case 2:		//显示联系人
			showPerson(&abs);
			break;
		case 3:		//删除联系人
			
			deletPerson(&abs);

		/*{
			cout << "请输入联系人姓名" << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
				cout << "找到用户" << endl;
			}
		}*/
			
			break;
		case 5:		//查找联系人
			break;
		case 6:		//清空联系人
			break;
		case 0:		//退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		}
	}

	system("pause");
	return 0;
}