#include <stdio.h>
int main()
{
	char ch[100];
	int n;
	scanf("%d", &n);
	int i, k;
	for (k=1; k<=n; k++)
	{
		int j=0;
		scanf("%s", ch);
		for (i=0; ch[i]!=0; i++)
	    {
		    j=j+1;
	    }
	    if (j<=10)
	    {
	    	printf("%s\n", ch);
	    }
	    else if (j>4)
	    {
	    	printf("%c%d%c\n", ch[0], j-2, ch[j-1]);
	    }
	}
	return 0;
}