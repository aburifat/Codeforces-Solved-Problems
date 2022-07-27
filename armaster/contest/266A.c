#include <stdio.h>
int main()
{
	int n, i, s=0;
	scanf("%d", &n);
	char in[55];
	scanf("%s", in);
	for (i=0; i<(n-1); i++)
	{
		if (in[i]==in[i+1])
		{
			s=s+1;
		}
	}
	printf("%d\n", s);
	return 0;
}