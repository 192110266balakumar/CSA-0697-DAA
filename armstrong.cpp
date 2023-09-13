#include<stdio.h>
int main()
{
	int rev,sum=0,n;
	printf("enter the number:\n");
	scanf("%d",&n);
	//int temp=n;
	
	while(n!=0)
	{
		rev=n%10;
		sum+=rev*rev*rev;
		n=n/10;
	}
	if (sum==n)
	{
		printf("%d is a armstrong number :)",n);
	}
	else
	printf("not armstrong");
	return 0;
}
