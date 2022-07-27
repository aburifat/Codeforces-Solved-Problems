#include <stdio.h>
int main()
{
    char x[110];
    int i, j, n=0, k;
    scanf("%s", x);
    //97-122...
    for (i=97; i<=122; i++)
    {
        for (j=1; x[j-1]!=0; j++)
        {
            k=x[j-1];
            if (k==i)
            {
                n=n+1;
                break;
            }
        }
    }
    if (n%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}