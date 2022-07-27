#include <stdio.h>
int main()
{
	char in[110];
	int i, j=0, k=0, l=0;
	scanf("%s", in);
	if (in[0]>96)
	{
		l=l+1;
	}
	for (i=0; in[i]!=0; i++)
	{
		j=j+1;
	}
	for (i=0; i<j; i++)
	{
		if (in[i]>64 && in[i]<91)
		{
			k=k+1;
		}
		if (in[0]>96)
		{
			if (in[i+1]>64 && in[i+1]<91)
			{
				l=l+1;
			}
		}
	}
	if (j==k)
	{
		for (i=0; i<j; i++)
		{
			in[i]=in[i]+32;
		}
	}
	if (j==l)
	{
		in[0]=in[0]-32;
		for (i=1; i<j; i++)
		{
			in[i]=in[i]+32;
		}
	}
	printf("%s\n", in);
	return 0;
}