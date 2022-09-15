#include <iostream>
using namespace std;

class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName() 
	{
		return m_Name;
	}
	//获取年龄
	int getAge() 
	{
		return m_Age;
	}
	//设置情人
	void setLover(string lover)
	{
		m_Lover = lover;
	}



private:
	//姓名 可读可写
	string m_Name;
	//年龄 只读
	int m_Age;
	//情人 只写
	string m_Lover;
};



int main() {

}