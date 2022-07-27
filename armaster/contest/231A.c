#include <stdio.h>
int main()
{
    int n, i, a, b, c, s=0;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a+b+c>1)
        {
            s=s+1;
        }
    }
    printf("%d\n", s);
    return 0;
}