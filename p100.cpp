#include<stdio.h>
int main()
{
	int n,i,count=0,prime=1,flag;
	scanf("%d",&n);
	
	while(n!=count)
	{
		flag=0;
		prime++;
		for (i=2;i<=(prime/2);i++)
		{
			if (prime%i==0)
			{
				flag=1;
			}
		}
		if (flag==0)
		{
			count++;
		}
	}
	printf("%d ",prime);                                                                                                                                                                                                                                                                
	return 0;
}
