#include<stdio.h>
void main()
{
	int i, j, n, sp;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(sp=1; sp<=n-i; sp++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
