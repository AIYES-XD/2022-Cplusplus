#include <iostream>
using namespace std;
//访问权限
//三种
//公共权限	public		类内可以访问	类外可以访问
//保护权限	protected	类内可以访问	类外不可以访问 继承的也可以访问的保护内容
//私有权限	private		类内可以访问	类外不可以访问 继承的不可以访问私有的内容

class Person
{
public :
	//公共权限
	string m_Name;

protected:
	//保护权限
	string m_Car;

private:
	//私有权限
	int m_Password;
	
public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 1234;
	}
};

int main(){
	Person p1;
	p1.m_Name = "李四";

}