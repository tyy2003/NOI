/*
描述
分别定义int，short类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。

输入
无。
输出
一行，两个整数，分别是两个变量的存储空间大小，用一个空格隔开。
*/
#include <stdio.h>
int main()
{
    int a;
    short s;

    printf("%d",sizeof(a));//sizeof表示的是数据类型的储存大小，是以数字的形式呈现=>输出的时候就要整型
    printf(" %d", sizeof(s));
    return 0;
}
