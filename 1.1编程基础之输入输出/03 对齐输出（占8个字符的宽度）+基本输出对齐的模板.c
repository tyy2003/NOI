#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%8d %8d %8d\n", a, b, c);  //设置输出位宽为8，左边补空格右对齐
    printf("%-8d %-8d %-8d\n", a, b, c);  //设置输出位宽为8，左对齐右边补空格
    printf("%08d %08d %08d\n", a, b, c);  //设置输出位宽为8，前置补0
    double d;
    scanf("%lf", &d);
    printf("%.2f\n", d);  //保留一位小数
    printf("%8.2f\n", d); //保留一位小数，并左对齐右边补空格
    return 0;
}
