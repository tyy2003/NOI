/*
描述
输入一个除空格以外的可见字符（保证在函数scanf中可使用格式说明符%c读入），输出其ASCII码。

输入
一个除空格以外的可见字符。
输出
一个十进制整数，即该字符的ASCII码。
*/
#include <stdio.h>
int main()
{
    char a;
    int b;
    scanf("%c", &a);
    b = (int)a;
    printf("%d", b);
    return 0;
}

