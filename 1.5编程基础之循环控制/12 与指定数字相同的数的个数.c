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
