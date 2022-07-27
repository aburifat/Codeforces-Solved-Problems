#include <stdio.h>
int main()
{
	int i, j=0, k=0, l=0, m;
    char s1[110], s2[110];
    scanf("%s", s1);
    scanf("%s", s2);
    for (i=0; s1[i]!=0; i++)
    {
        l=l+1;
        if (s1[i]>64 && s1[i]<91)
        {
            s1[i]=s1[i]+32;
        }
    }
    for (i=0; s2[i]!=0; i++)
    {
        if (s2[i]>64 && s2[i]<91)
        {
            s2[i]=s2[i]+32;
        }
    }
    for (i=0; s1[i]==s2[i] && s1[i]!=0; i++)
    {
        j=0;
        k=0;
    }
    j=s1[i];
    k=s2[i];
    if (j>k)
    {
        m=1;
    }
    if (j<k)
    {
        m=-1;
    }
    if (j==k)
    {
        m=0;
    }
    printf("%d\n", m);
    return 0;
}