#include<stdio.h>

// revison of string => toggel case
void main()
{
	int n,i;
	char str[50];
	
	printf("enter your name:");
	gets(str);
	
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]-=32;
		}
	}
	
	printf("string: %s",str);
	
}
