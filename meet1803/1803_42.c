#include<stdio.h>
// viva program 3
void main()
{
	int i,j,count=1;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>1;j--)
		{
			printf("%d",count);
			count++;	
		}
		printf("\n");
	}
}
