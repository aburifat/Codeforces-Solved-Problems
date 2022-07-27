#include <stdio.h>
int main()
{
    long long int n, a;
    scanf("%lld", &n);
    a=(n/2)-(n%2)*n;
    printf("%lld\n", a);
    return 0;
}