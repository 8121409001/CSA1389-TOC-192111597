#include<stdio.h>
#include<string.h>
main()
{
	char s[10],A='a';
	int n,c=0;
	printf("enter the string:");
	scanf("%s",s);
	n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]=='a'||s[i]=='b')
		{
			c=0;
		}
		else
		{
			c=1;
			printf("INVALID");
			break;
		}
	}
	if(c==0)
	{
		if(s[0]==A && s[1]==A)
		{
			printf("THE STRING WAS ACCEPTED");
		}
		else
		{
			printf("not DFA");
		}
	}
}
