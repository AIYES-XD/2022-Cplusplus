#include <iostream>
using namespace std; 

//设计一个学生类,属性有姓名和学号,可以给姓名和学号赋值,可以显示学生的姓名和学号

class Student
{
public:
    //属性
    string m_Name;
    int m_Id;

    //行为
    //显示姓名和学号
    void showStudent()
    {
        cout << "姓名" << m_Name << "学号" <<m_Id<< endl;
    }
    //给姓名赋值
    void setName(string name)
    {
        m_Name = name;

    }
};


int main()
{
    //创建一个具体的对象 实例化
    Student s1;
    s1.m_Name = "张三";
    s1.m_Id = 1;
    s1.showStudent();
}