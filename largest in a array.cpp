#include<stdio.h>
int main()
{
	int a[10],n,i,j,temp;
	printf("array size <10:\n");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf(" largest number in an array is %d ",a[0]);
		break;
	}
	return 0;
	
