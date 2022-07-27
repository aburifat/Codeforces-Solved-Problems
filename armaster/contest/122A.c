#include<stdio.h>
int main()
{
	int p, i, j, k=0, n=0 , x=0;
	scanf("%d", &p);
	if (p%4==0|| p%7==0|| p%47==0|| p%74==0|| p%447==0|| p%474==0|| p%477==0|| p%744==0|| p%747==0|| p%774==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}