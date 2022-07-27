#include<stdio.h>
int main()
{
    int i, j, n, t;
    scanf("%d %d", &n, &t);
    char x[n+1];
    scanf("%s", x);
    for (j=1; j<=t; j++)
    {
        for (i=1; i<n; i++)
        {
            if (x[i-1]=='B'&&x[i]=='G')
            {
                x[i-1]='G';
                x[i]='B';
                i=i+1;
            }
        }
    }

    printf("%s\n", x);
    return 0;
}