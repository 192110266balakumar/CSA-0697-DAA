#include<stdio.h>
int fib(int a)
{
	if (a==0)
	{
		return 0;
	}
	else if (a==1)
	{
		return 1;
	}
	else 
	return (fib(a-1)+fib(a-2));
}

int main()
{
	int a,i;
	printf("enter the number:\n");
	scanf("%d",&a);
	int m=0;
	for (i=1;i<=a;i++)
	{
		printf("%d ",fib(m));
		m++;
	}
	
	return 0;
}
