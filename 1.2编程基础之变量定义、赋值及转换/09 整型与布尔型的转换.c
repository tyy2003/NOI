/*
描述
将一个整型变量的值赋给一个布尔型变量，再将这个布尔型变量的值赋给一个整型变量，得到的值是多少？

输入
一个整型范围内的整数，即初始时整型变量的值。
输出
一个整数，经过上述过程后得到的结果。

*/
#include <stdio.h>
int main()
{
    int a, c;
    _Bool b;
    scanf("%d", &a);
    b = (int)a;
    c = (_Bool)b;
    printf("%d", c);
    return 0;
}

