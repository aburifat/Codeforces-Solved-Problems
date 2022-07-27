#include <stdio.h>
int main()
{
	int n, i, j, a=0, b=0, c=0, d=0, k;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		scanf("%d", &j);
		if (j==4)
		{
			a=a+1;
		}
		if (j==3)
		{
			b=b+1;
		}
		if (j==2)
		{
			c=c+1;
		}
		if (j==1)
		{
			d=d+1;
		}
	}
	k=a+b+(c/2);
	d=d-b;
	if (d<=0)
	{
		d=0;
	}
	if (c%2!=0)
	{
		k=k+1;
		d=d-2;
	}
	if (d<=0)
	{
		d=0;
	}
	k=k+(d/4);
	if (d%4!=0)
	{
		k=k+1;
	}
	printf("%d\n", k);
	return 0;
}