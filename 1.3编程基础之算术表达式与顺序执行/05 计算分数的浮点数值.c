/*
描述
两个整数a和b分别作为分子和分母，既分数 a/b ，求它的浮点数值（双精度浮点数，保留小数点后9位）

输入
输入仅一行，包括两个整数a和b（b不为0）
输出
输出也仅一行，分数 a/b 的浮点数值（双精度浮点数，保留小数点后9位）
*/
#include <stdio.h>
int main()
{
    double a, b;
    double s;
    scanf("%lf %lf", &a, &b);
    s = a/b;
    printf("%.9lf", s);
    return 0;
}
