#include <stdio.h>
int main()
{
    int i, j, n, k=0;
    scanf("%d", &n);
    int x[n], y[n], z[n];
    for (i=1; i<=n; i++)
    {
        scanf("%d", &x[i-1]);
        y[i-1]=i;
    }
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if(y[i-1]==x[j-1])
            {
                k=k+1;
                z[k-1]=j;
            }
        }
    }
    for (i=1; i<=n; i++)
    {
        printf("%d ", z[i-1]);
    }
    printf("\n");
    return 0;
}