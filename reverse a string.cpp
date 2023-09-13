# include<stdio.h>
# include<string.h>
int main()
{
	int l=0,h;
	char s[10];
	printf("enter a string:\n");
	scanf("%s",s);
	h=strlen(s)-1;
	
	while(h>l)
	{
		if (s[l++]!=s[h--])
		printf("%s ",s[h});
		return 0;
	}
	return 0;
}
