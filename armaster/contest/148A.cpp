#include<stdio.h>
int main()
{
    int a=0, i, k, l, m, n, d;
    scanf("%d", &k);
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &d);
    int x[100010];
    for (i=1; i<=d; i++)
    {
        x[i-1]=i;
    }
    for (i=0; i<d; i++)
    {
        if (x[i]%k==0||(l!=0&&x[i]%l==0)||(m!=0&&x[i]%m==0)||x[i]%n==0)
        {
            a=a+1;
        }
    }
    printf("%d\n", a);
    return 0;
}