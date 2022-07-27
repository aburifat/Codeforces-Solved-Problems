#include <stdio.h>
int main()
{
    unsigned long long int n;
    int i, k=0, a, c=0, b=0;
    scanf("%llu", &n);
    for (i=1; n>0; i++)
    {
        a=n%10;
        n=n/10;
        if (a==4||a==7)
        {
            k=k+1;
        }
    }
    for (i=1; k>0; i++)
    {
        a=k%10;
        k=k/10;
        c=c+1;
        if ((a!=0&&a==4)||(a!=0&&a==7))
        {
            b=b+1;
        }
    }
    if (c!=0&&c==b)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}