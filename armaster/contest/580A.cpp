#include <stdio.h>
int main()
{
    int n, k=1, i, j, p=1;
    scanf("%d", &n);
    int x[n];
    for (i=1; i<=n; i++)
    {
        scanf("%d", &x[i-1]);
    }
    for (i=1; i<n; i++)
    {
        if (x[i-1]<=x[i])
        {
            k=k+1;
            if (p<k)
            {
                p=k;
            }
        }
        else
        {
            k=1;
        }
    }
    printf("%d\n", p);
    return 0;
}