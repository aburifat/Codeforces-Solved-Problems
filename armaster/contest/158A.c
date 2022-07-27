#include <stdio.h>
int main()
{
    int n, k, i, p, a, s;
    s=0;
    int m[100];
    scanf("%d %d", &n, &k);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &a);
        m[i-1] = a;
        if (i==k)
        {
            p=m[i-1];
        }
    }
    for (i=1; i<=n; i++)
    {
        if (m[i-1]>=p && m[i-1]>0)
        {
            s=s+1;
        }
    }
    printf("%d\n", s);
    return 0;
}