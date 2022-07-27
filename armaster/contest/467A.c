#include <stdio.h>
int main()
{
    int i, n, z=0, p, q;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d %d", &p, &q);
        p=q-p;
        if (p>=2)
        {
            z=z+1;
        }
    }
    printf("%d\n", z);
    return 0;
}