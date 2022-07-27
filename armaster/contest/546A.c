#include <stdio.h>
int main()
{
    int i, k, n, w, a, b=0;
    scanf("%d %d %d", &k, &n, &w);
    for (i=1; i<=w; i++)
    {
        a=i*k;
        b=b+a;
    }
    b=b-n;
    if (b>0)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}