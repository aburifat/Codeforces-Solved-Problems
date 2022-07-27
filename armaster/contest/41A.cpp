#include <stdio.h>
int main()
{
    int g, i, j=0, k=0, d=0;
    char x[110], y[110];
    scanf("%s", x);
    scanf("%s", y);
    for (i=1; x[i-1]!=0; i++)
    {
        j=j+1;
    }
    for (i=1; y[i-1]!=0; i++)
    {
        k=k+1;
    }
    if (j!=k)
    {
        printf("NO\n");
    }
    else
    {
        for (i=1, g=j; i<=j; i++, g--)
        {
            if (x[i-1]==y[g-1])
            {
                d=d+1;
            }
        }
        if (d!=k)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}