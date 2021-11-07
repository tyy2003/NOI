/*
描述
还记得在上一章里，我们曾经输出过的“Hello, World!”吗？

它虽然不是本章所涉及的基本数据类型的数据，但我们同样可以用sizeof函数获得它所占用的空间大小。

请编程求出它的大小，看看跟你设想的是否一样？

输入
无。
输出
一个整数，即“Hello, World!”的大小。
*/
#include <stdio.h>
int main()
{

    printf("%d", sizeof("Hello, World!"));
    return 0;
}

