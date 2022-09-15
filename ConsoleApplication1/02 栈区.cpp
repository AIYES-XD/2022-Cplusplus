#include <iostream>
using namespace std;

int* func(int b)
{
    b = 100;
    int a = 10;
    return &a;
}

int main()
{
    int* p = func(1);
    cout << *p << endl;//第一次可以输出是因为编译器防止误操作保留了地址
    cout << *p << endl;//第二次就无法输出正确的地址

}

