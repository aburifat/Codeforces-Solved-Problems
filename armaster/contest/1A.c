#include <stdio.h>
int main()
{
    unsigned long long int n, m, a, s;
    scanf("%llu %llu %llu", &n, &m, &a);
    if (n%a==0)
    {
        if (m%a==0)
        {
            s=(n/a)*(m/a);
        }
        else
        {
            s=(n/a)*((m/a)+1);
        }
    }
    else if (n%a!=0)
    {
       if (m%a==0)
        {
            s=((n/a)+1)*(m/a);
        }
        else
        {
            s=((n/a)+1)*((m/a)+1);
        }
    }
    printf("%llu\n", s);
    return 0;
}