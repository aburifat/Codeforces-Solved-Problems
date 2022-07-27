#include <stdio.h>
int main()
{
	char in[1005];
	int i, j=0, k=0, l=0;
	scanf("%s", in);
	if (in[0]>96)
	{
		in[0]=in[0]-32;
	}
	printf("%s\n", in);
	return 0;
}