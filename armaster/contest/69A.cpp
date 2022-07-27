#include<stdio.h>
int main()
{
    int n, i, x=0, y=0, z=0, x1, y1, z1;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d %d %d", &x1, &y1, &z1);
        x=x+x1;
        y=y+y1;
        z=z+z1;
    }
    if (x==0&&y==0&&z==0)
    {
      printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}