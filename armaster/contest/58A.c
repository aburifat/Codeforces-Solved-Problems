#include<stdio.h>
int main()
{
	int i, j=0, k, p=0;
	char ch[110];
	scanf("%s", ch);
	for (i=0; ch[i]!=0; i++)
	{
		p=p+1;
		if (ch[i]=='h')
		{
			j=j+1;
			break;
		}
	}
	//printf("%d\n", p);
	for (k=p; ch[k]!=0; k++)
	{
		p=p+1;
		if (ch[k]=='e')
		{
			j=j+1;
			break;
		}
	}
	//printf("%d\n", p);
	for (i=p; ch[i]!=0; i++)
	{
		p=p+1;
		if (ch[i]=='l')
		{
			j=j+1;
			break;
		}
	}
	//printf("%d\n", p);
	for (k=p; ch[k]!=0; k++)
	{
		p=p+1;
		if (ch[k]=='l')
		{
			j=j+1;
			break;
		}
	}
	//printf("%d\n", p);
	for (i=p; ch[i]!=0; i++)
	{
		if (ch[i]=='o')
		{
			j=j+1;
			break;
		}
	}
	//printf("%d\n", p);
	if (j==5)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}