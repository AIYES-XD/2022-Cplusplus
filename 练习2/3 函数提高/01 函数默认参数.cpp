#include <iostream>
using namespace std;

//函数的默认参数
//如果我们自己传入数据,就用自己的数据,如果没有,那么就用默认值
//语法:返回值类型 函数名称(形参 = 默认值){}
int func(int a,int b,int c)
{
    return a + b + c;
}

//注意事项: 
//1.如果某个位置已经有了默认参数,那么从这个位置之后,从左到右都必须要有默认值
//2.声明和实现只能有一个有默认参数


int main()
{
    std::cout << "Hello World!\n";
}

