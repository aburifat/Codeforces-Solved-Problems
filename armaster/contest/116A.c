#include <stdio.h>
int main()
{
	int n, m, a, b, s=0, i;
	m=0;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		scanf("%d %d", &a, &b);
		s=s-a+b;
		if (s>m)
		{
			m=s;
		}
	}
	printf("%d\n", m);
	return 0;
}