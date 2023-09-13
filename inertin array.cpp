#include<stdio.h>
int main()
{
	int a[10],pos,i,x,n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element postion :\n");
	scanf("%d",&pos);
	
	printf("element to be inserted:\n");
	scanf("%d",&x);
	n=n+1;
	for (i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
		a[pos-1]=x;
	}
	
	for (i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
