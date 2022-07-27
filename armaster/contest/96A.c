#include<stdio.h>
int main()
{
    int i, j=0, k=1, l=0;
    char ch[105];
    scanf("%s", ch);
    for (i=0; ch[i]!=0; i++)
    {
        j=j+1;
    }
    for (i=1; i<=(j-1); i++)
    {
        if (ch[i-1]==ch[i])
        {
            k=k+1;
            if (k>l)
            {
                l=k;
            }
        }
        if (ch[i-1]!=ch[i])
        {
            k=1;
        }
    }
    if (l>=7)
    {
        printf("YES\n");
    }
    if (l<7)
    {
        printf("NO\n");
    }
    return 0;
}