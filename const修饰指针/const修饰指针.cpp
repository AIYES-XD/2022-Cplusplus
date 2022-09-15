// const修饰指针.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    int a = 10;
    int b = 10;
    //1.const修饰指针   常量指针
    const int* p = &a;
    //指针指向的值不可以改,指针的指向可以改
    
    //2.const修饰常量   指针常量 
    int* const p2 = &a;
    //指针的指向不可以改,指针指向的值可以更改

    //3.const修饰指针和常量
    const int* p3 = &a;
    //指针的指向和值不可以改变

}
