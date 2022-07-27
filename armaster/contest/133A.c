#include <stdio.h>
int main()
{
	char in[105];
	int i, j, k=0, z=0, p;
	scanf("%s", in);
	for (i=0; in[i]!=0; i++)
	{
		j=j+1;
	}
	for (i=0; i<j; i++)
	{
		if (in[i]=='H' || in[i]=='Q' || in[i]=='9')
		{
			p=2;
		}
		else
		{
			p=1;
		}
		if (p>k)
		{
			k=p;
		}
	}
	if (k==2)
	{
		printf("YES\n");
	}
	if (k==1)
	{
		printf("NO\n");
	}
	return 0;
}