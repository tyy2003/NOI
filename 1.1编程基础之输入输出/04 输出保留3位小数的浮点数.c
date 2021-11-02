/*
描述
读入一个单精度浮点数，保留3位小数输出这个浮点数。

输入
只有一行，一个单精度浮点数。
输出
也只有一行，读入的单精度浮点数。
*/
#include <stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    printf("%.3f", a);
    return 0;
}
