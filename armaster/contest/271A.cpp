#include<stdio.h>
int main()
{
    int n, i, a[5], k, t;
    scanf("%d", &n);
    for (i=n+1; i>0; i++)
    {
        t=i;
        for (k=1; k<=4; k++)
        {
            a[k-1]=t%10;
            t=t/10;
        }
        if (a[0]!=a[1]&&a[1]!=a[2]&&a[2]!=a[3]&&a[1]!=a[3]&&a[2]!=a[0]&&a[0]!=a[3])
        {
            printf("%d\n", i);
           break;
        }
    }
    return 0;
}