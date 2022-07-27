#include <stdio.h>
int main()
{
	int a, b, i;
	scanf("%d %d", &a, &b);
	for (i=1; a<=b; i++)
	{
		a=a*3;
		b=b*2;
	}
	printf("%d\n", i-1);
	return 0;
}