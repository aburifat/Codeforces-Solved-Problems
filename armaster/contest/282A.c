#include <stdio.h>
int main()
{
	int m, i, j=0;
	char b[4];
	scanf("%d", &m);
	for (i=1; i<=m; i++)
	{ 
		scanf("%s", b);
		//printf("%c\n", b[1]);
		if (b[1]=='+')
		{
			j++;
			//printf("%d\n", j);
		}
		if (b[1]=='-')
		{
			j--;
			//printf("%d\n", j);
		} 
	}
	printf("%d\n", j); 
	return 0;
}