#include<stdio.h>
int main()
{
	int x[5][5];
	int i, j, k, l, n;
	for (i=0; i<5; ++i)
	{
		for (j=0; j<5; ++j)
		{
			scanf("%d", &x[i][j]);
			if (x[i][j]==1)
			{
				k=i;
				l=j;
			}
		}
	}
	if (k>2)
	{
		k=k-2;
	}
	else
	{
		k=2-k;
	}
	if (l>2)
	{
		l=l-2;
	}
	else
	{
		l=2-l;
	}
	n=k+l;
	printf("%d\n", n);
	return 0;
}