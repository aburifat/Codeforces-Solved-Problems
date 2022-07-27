#include <stdio.h>
int main()
{
    int n, m, k=1000, i, j;
    scanf("%d %d", &n, &m);
    int x[55];
    for (i=1; i<=m; i++)
    {
        scanf("%d", &x[i-1]);
    }
    for (i=1; i<=m; i++)
    {
        for (j=1; j<m; j++)
        {
            if (x[j-1]<x[j])
            {
                int tmp;
                tmp=x[j-1];
                x[j-1]=x[j];
                x[j]=tmp;
            }
        }
    }
    for (i=1; (i<=m-n+1); i++)
    {
        int d = x[i-1]-x[i+n-2];
        if (k>d)
        {
            k=d;
        }
    }
    printf("%d\n", k);
    return 0;
}