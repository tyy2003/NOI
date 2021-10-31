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

### 



## 1.5编程基础之循环控制

### 08:多边形内角和

![](https://tyy.tanyaodan.com/ch0105/8.png)

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

### 12:与指定数字相同的数的个数

![](https://tyy.tanyaodan.com/ch0105/12.png)

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

