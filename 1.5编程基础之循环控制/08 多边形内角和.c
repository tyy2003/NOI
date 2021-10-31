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
