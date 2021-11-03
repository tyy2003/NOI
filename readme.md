## 1.1编程基础之输入输出

### 01:Hello, World!

![](https://tyy.tanyaodan.com/ch0101/1.png)

```c
#include <stdio.h>
int main()
{
    printf("Hello, World!");
    return 0;
}
```

------

### 02:输出第二个整数

![](https://tyy.tanyaodan.com/ch0101/2.png)

```c
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", b);
    return 0;
}
```

------

### 03：对齐输出

------

![3](https://tyy.tanyaodan.com/ch0101/3.png)

```c
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%8d %8d %8d", a, b, c);
    return 0;
}
```

------

### 04:输出保留3位小数的浮点数

![](https://tyy.tanyaodan.com/ch0101/4.png)

```c
#include <stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    printf("%.3f", a);
    return 0;
}
```

------

### 05:输出保留12位小数的浮点数

![](https://tyy.tanyaodan.com/ch0101/5.png)

```c
#include <stdio.h>
int main()
{
    double  a;
    scanf("%lf", &a);
    printf("%.12lf", a);
    return 0;
}
```

------

### 06:空格分隔输出

![](https://tyy.tanyaodan.com/ch0101/6.1.png)

![](https://tyy.tanyaodan.com/ch0101/6.2.png)

```c
#include <stdio.h>
int main()
{
    char a;
    int b;
    float c;
    double d;

    scanf("%c %d %f %lf", &a, &b, &c, &d);
    printf("%c %d %f %lf", a, b, c, d);
    return 0;
}
```

------

### 07：输出浮点数

![](https://tyy.tanyaodan.com/ch0101/7.1.png)

![](https://tyy.tanyaodan.com/ch0101/7.2.png)

```c
#include <stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);
    printf("%f\n", a);
    printf("%.5f\n", a);
    printf("%e\n", a);
    printf("%g", a);
    return 0;
}
```

------

### 08：字符三角形

![](https://tyy.tanyaodan.com/ch0101/8.png)

```c
#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    printf("  %c\n", a);
    printf(" %c%c%c\n", a, a, a);
    printf("%c%c%c%c%c", a, a, a, a, a);
    return 0;
}
```

------

### 09：字符菱形

![](https://tyy.tanyaodan.com/ch0101/9.png)

```c
#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);

    printf("  %c\n", a);
    printf(" %c%c%c\n", a, a, a);
    printf("%c%c%c%c%c\n", a, a, a, a, a);
    printf(" %c%c%c\n", a, a, a);
    printf("  %c\n", a);
    return 0;
}
```

------

## **1.2编程基础之变量定义、赋值及转换**

### 01:整型数据类型存储空间大小

![](https://tyy.tanyaodan.com/ch0102/1.png)

```c
#include <stdio.h>
int main()
{
    int a;
    short s;
    printf("%d",sizeof(a));
    printf(" %d", sizeof(s));
    return 0;
}
```

------

### 02:浮点型数据类型存储空间大小

![](https://tyy.tanyaodan.com/ch0102/2.png)

```c
#include <stdio.h>
int main()
{
    float a;
    double s;
    printf("%d %d", sizeof(a), sizeof(s));
    return 0;
}
```

------

### 03:其他基本数据类型存储空间大小

![](https://tyy.tanyaodan.com/ch0102/3.png)

```c
#include <stdio.h>
int main()
{
    _Bool a;
    char s;
    printf("%d %d", sizeof(a), sizeof(s));
    return 0;
}
```

------

### 04:填空：类型转换1

![](https://tyy.tanyaodan.com/ch0102/4.1.png)

![](https://tyy.tanyaodan.com/ch0102/4.2.png)

```c
#include <stdio.h>
int main()
{
    printf("D C");
    return 0;
}
```

------

### 05:填空：类型转换2

![](https://tyy.tanyaodan.com/ch0102/5.1.png)

![](https://tyy.tanyaodan.com/ch0102/5.2.png)

```c
#include <stdio.h>
int main()
{
    printf("F E");
    return 0;
}
```

------

### 06:浮点数向零舍入

![](https://tyy.tanyaodan.com/ch0102/6.png)

```c
#include <stdio.h>
int main()
{
    float a;
    int b;
    scanf("%f", &a);
    b = a/1;
    printf("%d", b);
    return 0;
}
```

------

### 07:打印ASCII码

![](https://tyy.tanyaodan.com/ch0102/7..png)

```c
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
```

------

### 08:打印字符

![](https://tyy.tanyaodan.com/ch0102/8.png)

```c
#include <stdio.h>
int main()
{
    int a;
    char b;
    scanf("%d", &a);
    b = (char)a;
    printf("%c", b);

    return 0;
}
```

------

### 09:整型与布尔型的转换

![](https://tyy.tanyaodan.com/ch0102/9.png)

```c
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
```

------

### 10:Hello, World!的大小

![](https://tyy.tanyaodan.com/ch0102/10.png)

```c
#include <stdio.h>
int main()
{
    printf("%d", sizeof("Hello, World!"));
    return 0;
}
```

------

## **1.3编程基础之算术表达式与顺序执行**

### 01:A+B问题

![](https://tyy.tanyaodan.com/ch0103/1.png)

```c
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a+b;
    printf("%d", c);
    return 0;
}
```

------

### 02:计算(a+b)*c的值

![](https://tyy.tanyaodan.com/ch0103/2.png)

```c
#include <stdio.h>
int main()
{
    int a, b, c, ans;
    scanf("%d %d %d", &a, &b, &c);
    ans = (a+b)*c;
    printf("%d", ans);
    return 0;
}
```

------

### 03:计算(a+b)/c的值

![](https://tyy.tanyaodan.com/ch0103/3.png)

```c
#include <stdio.h>
int main()
{
    int a, b, c, ans;
    scanf("%d %d %d", &a, &b, &c);
    ans = (a+b)/c;
    printf("%d", ans);
    return 0;
}
```

------

### 04:带余除法

![](https://tyy.tanyaodan.com/ch0103/4.png)

```c
#include <stdio.h>
int main()
{
    int a, b, ans1, ans2;
    scanf("%d %d", &a, &b);
    ans1 = a/b;
    ans2 = a%b;
    printf("%d %d", ans1, ans2);
    return 0;
}
```

------

### 05:计算分数的浮点数值

![](https://tyy.tanyaodan.com/ch0103/5.png)

```c
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
```

------

### 06:甲流疫情死亡率

![](https://tyy.tanyaodan.com/ch0103/6.png)

```c
#include <stdio.h>
int main()
{
    double a, b, ans;
    scanf("%lf %lf", &a, &b);
    ans = (b*100)/a;
    printf("%.3lf%%", ans);
    return 0;
}
```

------

### 07:计算多项式的值

![](https://tyy.tanyaodan.com/ch0103/7.png)

```c
#include <stdio.h>
int main()
{
    double x, a, b, c, d, ans;
    scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);
    ans = a*x*x*x + b*x*x + c*x + d;
    printf("%.7lf", ans);
    return 0;
}
```

------

### 08:温度表达转化

![](https://tyy.tanyaodan.com/ch0103/8.png)

```c
#include <stdio.h>
int main()
{
    double c, f;
    scanf("%lf", &f);
    c = 5*(f-32)/9;
    printf("%.5lf", c);
    return 0;
}
```

------

### 09:与圆相关的计算

![](https://tyy.tanyaodan.com/ch0103/9.png)

```c
#include <stdio.h>
int main()
{
    double r, d, c, s;
    const double pi=3.14159;//const修饰的数据类型是指常类型，常类型的变量或对象的值是不能被更新的。
    scanf("%lf", &r);
    d = 2*r;
    c = 2*pi*r;
    s = pi*r*r;
    printf("%.4lf %.4lf %.4lf", d, c, s);
    return 0;
}
```

------

### 10:计算并联电阻的阻值

![](https://tyy.tanyaodan.com/ch0103/10.png)

```c
#include <stdio.h>
int main()
{
    float r1, r2, R;
    scanf("%f %f", &r1, &r2);
    R = 1/(1/r1 + 1/r2);
    printf("%.2f", R);
    return 0;
}
```

------

### 11:计算浮点数相除的余数

![](https://tyy.tanyaodan.com/ch0103/11.png)

```c
#include <stdio.h>
int main()
{
    double a, b, r;
    int k;
    scanf("%lf %lf", &a, &b);
    k = (int)(a/b);
    r = a - k*b;
    printf("%g", r);
    return 0;
}
```

------

### 12:计算球的体积

![](https://tyy.tanyaodan.com/ch0103/12.png)

```c
#include <stdio.h>
int main()
{
    double r, v;
    const double pi = 3.14;
    scanf("%lf", &r);
    v = pi*r*r*r*4/3;
    printf("%.2lf", v);
    return 0;
}
```

------

### 13:反向输出一个三位数

![](https://tyy.tanyaodan.com/ch0103/13.png)

```c
#include <stdio.h>
int main()
{
    int n;
    int g, s, b;
    scanf("%d", &n);
    b = n/100;
    s = (n - b*100)/10;
    g = n - b*100-s*10;
    printf("%d%d%d", g, s, b);
    return 0;
}
```

------

### 14:大象喝水

![](https://tyy.tanyaodan.com/ch0103/14..png)

```c
#include <stdio.h>
int main()
{
    int h, r, a;
    scanf("%d %d", &h, &r);
    const double pi = 3.14159;
    a = 20/(pi*r*r*h/1000)+1;
    printf("%d", a);
    return 0;
}
```

------

### 15:苹果和虫子

![](https://tyy.tanyaodan.com/ch0103/15.png)

```c
#include <stdio.h>
int main()
{
    int n, x, y, ans;
    scanf("%d %d %d", &n, &x, &y);

    if(y%x == 0)
    {
        ans = n - y/x;
        printf("%d", ans);
    }
    else
    {
        ans = n - (y/x+1);
        printf("%d", ans);
    }

    return 0;
}
```

------

### 16:计算线段长度

![](https://tyy.tanyaodan.com/ch0103/16..png)

```c
#include <stdio.h>
#include <math.h>
int main()
{
    double Xa, Ya, Xb, Yb;
    double l;
    scanf("%lf %lf\n", &Xa, &Ya);
    scanf("%lf %lf", &Xb, &Yb);

    l = (Xa-Xb)*(Xa-Xb)+(Ya-Yb)*(Ya-Yb);
    printf("%.3lf", sqrt(l));

    return 0;
}
```

------

### ★17:计算三角形面积

![](https://tyy.tanyaodan.com/ch0103/17.png)

```c
#include <stdio.h>
#include <math.h>

//计算俩个坐标点之间的长度
double lenOfSide(float x1, float y1, float x2, float y2)
{
    double x = (x1-x2);
    double y = (y1-y2);
    return sqrt(x*x+y*y);
}

int main()
{
    float x1, x2, x3, y1, y2, y3;
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    //已知三角形的三个顶点坐标，先求三条边的长度
    double a = lenOfSide(x1, y1, x2, y2);
    double b = lenOfSide(x1, y1, x3, y3);
    double c = lenOfSide(x2, y2, x3, y3);
    //海伦-秦九韶公式
    double p = (a+b+c)/2;
    double area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2lf", area);
    return 0;
}
```

------

### 18:等差数列末项计算

![](https://tyy.tanyaodan.com/ch0103/18.png)

```c
#include <stdio.h>
int main()
{
    int a1, a2, d, n;
    int ans;
    scanf("%d %d %d", &a1, &a2, &n);
    d = a2 - a1;
    ans = a1 + (n-1)*d;
    printf("%d", ans);
    return 0;
}
```

------

### 19:A*B问题

![](https://tyy.tanyaodan.com/ch0103/19.png)

```c
#include <stdio.h>
int main()
{
    long long int a, b;
    long long int ans;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a*b);
    return 0;
}
```

------

### 20:计算2的幂

![](https://tyy.tanyaodan.com/ch0103/20.png)

```c
#include <stdio.h>
#include <math.h>
int main()
{
    int n, ans;
    scanf("%d", &n);
    ans = pow(2,n);     //pow专门求幂，pow（a，b）其中a为底数，b为次方
    printf("%d", ans);
    return 0;
}
```

------

## **1.4编程基础之逻辑表达式与条件分支**

### 01:判断数正负

![](https://tyy.tanyaodan.com/ch0104/1.png)

```c
#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    if(n != 0)
    {
        if(n > 0)
        {
            printf("positive");
        }
        else
        {
            printf("negative");
        }
    }
    else
    {
        printf("zero");
    }
    return 0;
}
```

------

### 02:输出绝对值

![](https://tyy.tanyaodan.com/ch0104/2..png)

```c
#include <stdio.h>
int main()
{
    float a, ans;
    scanf("%f", &a);
    if(a<0)
    {
        ans = -a;
        printf("%.2f", ans);
    }
    else
    {
        ans = a;
        printf("%.2f", ans);
    }
    return 0;
}
```

------

### 03:奇偶数判断

![](https://tyy.tanyaodan.com/ch0104/3.png)

```c
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%2 !=0)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
    return 0;
}
```

------

### 04:奇偶ASCII值判断

![](https://tyy.tanyaodan.com/ch0104/4.png)

```c
#include <stdio.h>
int main()
{
    char a, b;
    scanf("%c", &a);
    b = (int)a;
    if(b%2 !=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
```

------

### 05:整数大小比较

![](https://tyy.tanyaodan.com/ch0104/5.png)

```c
#include <stdio.h>
int main()
{
    long long int x, y;
    scanf("%lld %lld", &x, &y);
    if(x != y)
    {
        if(x>y)
        {
            printf(">");
        }
        else
        {
            printf("<");
        }
    }
    else
    {
        printf("=");
    }
    return 0;
}
```

------

### 06:判断是否为两位数

![](https://tyy.tanyaodan.com/ch0104/6.png)

```c
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if((a/10 >= 1) && (a/10 <= 9))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
```

------

### 07:收集瓶盖赢大奖

![](https://tyy.tanyaodan.com/ch0104/7.png)

```c
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if((a>=10) || (b >= 20))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
```

------

### 08:判断一个数能否同时被3和5整除

![](https://tyy.tanyaodan.com/ch0104/8.png)

```c
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if((n%3 == 0) && (n%5 == 0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
```

------

### 09:判断能否被3，5，7整除

![](https://tyy.tanyaodan.com/ch0104/9.png)

```c
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if((a%3 == 0) || (a%5 == 0) || (a%7 == 0))
    {
        if(a%3 == 0)
        {
            if(a%5 ==0)
            {
                if(a%7 != 0)
				{
					printf("3 5");
				}
				else
				{
					printf("3 5 7"); 
				}
            }
            else if(a%7 == 0)
            {
            	if(a%5 != 0)
            	{
                	printf("3 7");
            	}
            	else
            	{
					printf("3 5 7");
				}
            }
            else
            {
                printf("3");
            }
        }
        else if(a%5 == 0)
        {
            if(a%7 ==0)
            {
                printf("5 7");
            }
            else
            {
                printf("5");
            }
        }
        else
        {
            printf("7");
        }
    }
    else
    {
        printf("n");
    }
    return 0;
}
```

------

### 10:有一门课不及格的学生

![](https://tyy.tanyaodan.com/ch0104/10.png)

```c
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if((a>=60 && b>=60)||(a<60&&b<60))
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    return 0;

}
```

------

### 11:晶晶赴约会

![](https://tyy.tanyaodan.com/ch0104/11.png)

```c
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    switch(a)
    {
        case 7:
            printf("YES");
            break;
        case 6:
            printf("YES");
            break;
        case 5:
            printf("NO");
            break;
        case 4:
            printf("YES");
            break;
        case 3:
            printf("NO");
            break;
        case 2:
            printf("YES");
            break;
        case 1:
            printf("NO");
            break;
    }
    return 0;
}
```

------

### 12:骑车与走路

![](https://tyy.tanyaodan.com/ch0104/12.png)

```c
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a != 100)
    {
        if(a>100)
        {
            printf("Bike");
        }
        else
        {
            printf("Walk");
        }
    }
    else
    {
        printf("All");
    }
    return 0;
}
```

------

### 13:分段函数

![](https://tyy.tanyaodan.com/ch0104/13.png)

```c
#include <stdio.h>
int main()
{
    double n, m;
    scanf("%lf", &n);
    if(n>=0 && n<20)
    {
        if(n>=0 && n<5)
        {
            printf("%.3lf", 2.5-n);
        }
        else if(n>=5 && n<10)
        {
            printf("%.3lf", 2-1.5*(n-3)*(n-3));
        }
        else
        {
            printf("%.3lf", n/2-1.5);
        }
    }
    return 0;
}
```

------

### ★14:计算邮资

![](https://tyy.tanyaodan.com/ch0104/14.png)

```c
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    char ch;
    scanf("%d %c", &n, &ch);
    int sum = 8;
    if(n > 1000)
    {
        double t = n - 1000;
        sum += ceil(t/500)*4;  //向上取整, 如ceil(4.1)=5
    }
    if(ch == 'y')
    {
        sum += 5;
    }
    printf("%d\n", sum);
    return 0;
}
```

------

### 15:最大数输出

![](https://tyy.tanyaodan.com/ch0104/15.png)

```c
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    if(a>c)
    {
        if(b>a)
        {
            printf("%d", b);
        }

        else
        {
        printf("%d", a);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d", b);
        }

        else
        {
            printf("%d", c);
        }
    }
    return 0;
}
```

------

### ★16:三角形判断

![](https://tyy.tanyaodan.com/ch0104/16.png)

```c
#include <stdio.h>

int main()
{
    int a, b, c; //题目说了三个输入是正整数
    scanf("%d %d %d", &a, &b, &c);
    //小学数学题 三角形的任意两边之和大于第三边
    //注意任意两个字 两边之和大于第三边 所以是用 && 拼接
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
```

------

### 17:判断闰年

![](https://tyy.tanyaodan.com/ch0104/17.png)

```c
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a%4 == 0)
    {
        if(a%100 != 0)
        {
            printf("Y");
        }
        else if(a%400 == 0)
        {
            printf("Y");
        }
        else
        {
            printf("N");
        }
    }
    else
    {
        printf("N");
    }
    return 0;
}
```
优质代码

```c
#include <stdio.h>

int leapYear(int n)
{
    // 除以4余数得0且模除100不得0 但是模除400又得0
    return (n%4==0 && n%100!=0) || n%400==0;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%c\n", leapYear(a) ? 'Y' : 'N');
    return 0;
}
```

------

### 18:点和正方形的关系

![](https://tyy.tanyaodan.com/ch0104/18.png)

```c
#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if((x>=-1 && x<=1)&&(y<=1 && y>=-1))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
```

------

### 19:简单计算器

![](https://tyy.tanyaodan.com/ch0104/19.png)

```c
#include <stdio.h>
int main()
{
    int a, b, ans;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    switch(op)
    {
        case '+':
            ans = a+b;
            printf("%d", ans);
            break;
        case '-':
            ans = a-b;
             printf("%d", ans);
            break;
        case '*':
            ans = a*b;
             printf("%d", ans);
            break;
        case '/':
        if(b != 0)
        {
            ans = a/b;
            printf("%d", ans);
         }
         else
         {
            printf("Divided by zero!");
         }
            break;
        default:
            printf("Invalid operator!");
    }
    return 0;
}
```

------

### ★20:求一元二次方程的根

![](https://tyy.tanyaodan.com/ch0104/20.1.png)

![](https://tyy.tanyaodan.com/ch0104/20.2.png)

```c
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, x;
    double m, n, s;                 //把需要进行多次运算的东西都用变量来代替，不然在程序运行时会增加时长
    scanf("%lf %lf %lf", &a, &b, &c);

    s = b*b-4*a*c;
    x1 = (-b + sqrt(s))/(2*a);
    x2 = (-b - sqrt(s))/(2*a);

    if(s != 0)
    {
        if(s>0)
        {
            if(x1 > x2)
            {
                printf("x1=%.5lf;x2=%.5lf", x1, x2);
            }
            else
            {
                    printf("x1=%.5lf;x2=%.5lf", x2, x1);
            }
        }
        else
        {
            s = -s;             //?
            m =  -b / (2*a);
            n =  sqrt(s) / (2*a);

            if(b!=0)
            {
                printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", m, n, m, n);
            }
            else
            {
                printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", -m, n, -m, n);
            }
        }
    }
    else
    {
        x = x1 = x2;
        printf("x1=x2=%.5lf", x);
    }
    return 0;
}
```

------

### ★★21:苹果和虫子2

![](https://tyy.tanyaodan.com/ch0104/21.png)

```c
#include <stdio.h>
#include <math.h>

int main()

{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    int ans;
    if(x == 0) //如果不加这个条件x=0时会溢出 如10 0 9
    {
        ans = n;
    }
    else
    {
        ans = n - ceil((double)y/x);
    }
    printf("%d\n", ans>0 ? ans : 0); //ans小于0时要赋值为0 不能为负数
    return 0;
}
```

------

## 1.5编程基础之循环控制

### 01:求平均年龄

![](https://tyy.tanyaodan.com/ch0105/1..png)

```c
#include <stdio.h>
int main()
{
    int n;
    int m[100] = {0};     //数组m一个有100个数
    float a, sum;
    scanf("%d", &n);
    for(int j=1; j<=n; j++)
    {
        scanf("%d", &m[j]);   //数组里的是变量（因为咱们还不知道j是多少）
    }
    for(int i=1; i<=n; i++)
    {
        sum += m[i];
    }
    a = sum/n;
    printf("%.2f", a);
    return 0;
}
```

------

### 02:财务管理

![](https://tyy.tanyaodan.com/ch0105/2.1.png)

![](https://tyy.tanyaodan.com/ch0105/2.2.png)

```c
#include <stdio.h>
int main()
{
    float a[12]={0};
    float r, sum;
    for (int i=1;i<=12;i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    r=sum/12;
    printf ("$%.2f",r);
    return 0;
}
```

------

### 03:均值

![](https://tyy.tanyaodan.com/ch0105/3..png)

```c
#include <stdio.h>

int main()
{
    int a;
    double b, sum, avg;
    scanf("%d", &a);

    for(int i=0; i<a; i++)
    {
        scanf("%lf", &b);
        sum +=b;
    }
    avg = sum/a;
    printf("%.4lf\n", avg);
    return 0;
}
```

------

### 04:求整数的和与均值

![](https://tyy.tanyaodan.com/ch0105/4..png)

```c
#include <stdio.h>

int main()
{
    int n, data;
    double avg, sum;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &data);
        sum += data;
    }
    avg = sum/n;
    printf("%.0lf %.5lf", sum, avg);
    return 0;
}
```

------

### 05:最高的分数

![](https://tyy.tanyaodan.com/ch0105/5...png)

```c
#include <stdio.h>

int main()
{
    int n, data, max=-1;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &data);
        if(data>max)
        {
            max = data;
        }
    }
     printf("%d", max);
    return 0;
}
```

------

### 06:整数序列的元素最大跨度值

![](https://tyy.tanyaodan.com/ch0105/6..png)

```
#include <stdio.h>

int main()

{
    int n, data, max=0, min=1000;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &data);
        if(data>max)
        {
            max = data;
        }
        if(data<min)
        {
            min = data;
        }
    }
    printf("%d", max-min);
    return 0;
}
```

------

### 07:奥运奖牌计数

![](https://tyy.tanyaodan.com/ch0105/7..png)

```c
#include <stdio.h>

int main()
{
    int n, j=0, y=0, t=0, sum=0;        //要记得赋初值哟！
    int a, b, c;        //a,b,c的意思是每天所取得的金牌银牌铜牌的数量
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        j += a;
        y += b;
        t += c;
    }

    sum = (j+y+t);
    printf("%d %d %d %d", j, y, t, sum);
    return 0;
}
```

------

### ★08:多边形内角和

![](https://tyy.tanyaodan.com/ch0105/8..png)

```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ans = (n-2)*180; //(n-2)*180 的结果是多边形内角和
    for(int i=0; i<n-1; i++)
    {
        int t;
        scanf("%d", &t);
        ans -= t;
    }
    printf("%d\n", ans);
    return 0;
}
```

------

### 09:奇数求和

![](https://tyy.tanyaodan.com/ch0105/9..png)

```c
#include <stdio.h>

int main()
{
    int m, n, i, sum=0;
    scanf("%d %d", &m, &n);
    for(i=m; i<=n; i++)     //从m到n（一定要注意题目中两个变量间的大小关系），即i的初值一个是m最大值应该是n
    {
        if(i%2 == 1)
        {
            sum += i;
        }

    }
    printf("%d", sum);
    return 0;
}
```

------

### 10:满足条件的数累加

![](https://tyy.tanyaodan.com/ch0105/10..png)

```c
#include <stdio.h>

int main()
{
    int m, n, sum=0, i;
    scanf("%d %d", &m, &n);
    for(i=m; i<=n; i++)
    {
        if(i%17 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}
```

------

### 11:整数的个数

![](https://tyy.tanyaodan.com/ch0105/11..png)

```c
#include <stdio.h>

int main()
{
    int k, c1=0, c2=0, c3=0, data;
    scanf("%d", &k);
    for(int i=1; i<=k; i++)     //注意看一下题中给定的取值范围
    {
        scanf("%d", &data);
        if(data%10 == 1)
        {
            c1 += 1;
        }
        else if(data%5 == 0)
        {
            if(data%10 == 0)
            {
                c3 += 1;
            }
            else
            {
                c2 += 1;
            }
        }
        else
        {
            c1+=0;
            c2+=0;
            c3+=0;
        }
    }
    printf("%d\n%d\n%d", c1, c2, c3);
    return 0;
}
```

------

### ★12:与指定数字相同的数的个数

![](https://tyy.tanyaodan.com/ch0105/12..png)

```c
#include <stdio.h>

int main()
{
    int n, m, cnt = 0;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++)
    {
        int t;
        scanf("%d", &t);
        if(t == m)
        {
            cnt += 1;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
```

------

### 13:乘方计算

![](https://tyy.tanyaodan.com/ch0105/13..png)

```c
#include <stdio.h>
#include <math.h>

int main()
{
    int a, n, ans;
    scanf("%d %d", &a, &n);
    ans = pow(a,n);
    printf("%d", ans);
    return 0;
}
```

------

### 14:人口增长问题

![](https://tyy.tanyaodan.com/ch0105/14.0.png)

```c
#include <stdio.h>
#include <math.h>

int main()

{
    double x, n, t1, t2;
    double ans;
    scanf("%lf %lf",&x, &n);
    t1 = (1+0.001);
    t2 = pow(t1,n);
    ans = x*t2;
    printf("%.4lf", ans);
    return 0;
}
```

------

### 15:银行利息

![](https://tyy.tanyaodan.com/ch0105/15.0.png)

```c
#include <stdio.h>
#include <math.h>
int main()
{
    double r, m, y, t1, t2, ans1;
    scanf("%lf %lf %lf", &r, &m, &y);
    t1 = 1+0.01*r;
    t2 = pow(t1,y);
    ans1 = m*t2;
    printf("%d", (int)ans1);
    return 0;
}
```

------







------

### 26:统计满足条件的4位数个数

![](https://tyy.tanyaodan.com/ch0105/26.png)

```
#include <stdio.h>

int main()
{
    int n, data;
    int g, s, b, q;
    int sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &data);

        q=data/1000;
        b=(data-1000*q)/100;
        s=(data-1000*q-100*b)/10;
        g=data%10;

        if(g-q-b-s>0)
        {
            sum+=1;
        }
    }

    printf("%d", sum);
    return 0;
}
```

