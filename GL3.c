#include<stdio.h>
void main()
{
	int a, b, c;
	printf("enter a value: ");
	scanf("%d%d%d",&a, &b, &c);
	if(a>b && a>c)
	{
		printf("It is greater: %d",a);
	}
	else if(b>c)
	{
		printf("It is greater: %d", b);
	}
	else
	{
		printf("It is greater: %d", c);
	}
}
