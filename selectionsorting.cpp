#include<stdio.h>
int main()
{
	int i,j,n,a[10],temp;
	int min_arr;
	
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<n-1;i++)
	{
		min_arr=i;
		for (j=i+1;j<n;j++)
		{
			if (a[min_arr]>a[j])
			{
				min_arr=j;
			}
		}
		if (min_arr!=i)
		{
			temp=a[i];
			a[i]=a[min_arr];
			a[min_arr]=temp;
		}
	}
	printf("sorted array using selection sorting\n");
	
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
