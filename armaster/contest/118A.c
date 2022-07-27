#include <stdio.h>
int main()
{
	char ch[100];
	scanf("%s", ch);
	char ch1[100], ch2[100];
	int i, j=0, k;
	for (k=0; ch[k]!=0; k++)
	{
		j=j+1;
	}
	for (i=0; i<=j; i++)
	{
	    if (ch[i]!='a' && ch[i]!='A' && ch[i]!='o' && ch[i]!='O' && ch[i]!='y' && ch[i]!='Y' && ch[i]!='e' && ch[i]!='E' && ch[i]!='u' && ch[i]!='U' && ch[i]!='i' && ch[i]!='I')
 	{
		if (ch[i]>64 && ch[i]<91)
		{
			ch[i]=ch[i]+32;
		}
 	}
     else
     {
	    ch[i]=0;
     }
	}
	for (i=0; i<=j-1; i++)
	{
		if (ch[i]!=0)
		{
			printf(".%c", ch[i]);
		}
	}
	printf("\n");
	return 0;
}