#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,k,r,c;
	scanf("%d %d",&r,&c);
	
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for (i=0;i<r;i++)
	{
		mul[i][j]=0;
		for (j=0;j<c;j++)
		{
			for (k=0;k<c;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}	
		}
	}
	
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");        
	}
	
	
}
