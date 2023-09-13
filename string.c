#include<stdio.h>
void main()
{
	char a[10],b[10];
	printf("Enter a string: ");
	scanf("%s%s",a,b);
	if (a==b)
	printf("It is equal string: %s");
	else
	printf("It is not equal string: %s");
}
