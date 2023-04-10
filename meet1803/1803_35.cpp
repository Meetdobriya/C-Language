#include<stdio.h>
main()
{
	printf("pattern no=>2\n\n");
	int i,k,j;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf("-");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n\npattern no=>3\n\n");
	
	for(i=5;i>=1;i--)
	{
		for(k=i;k>1;k--)
		{
			printf("-");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
		printf("\n\npattern no=>4\n\n");
	
	for(i=5;i>=1;i--)
	{
		for(k=i;k>1;k--)
		{
			printf("-");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n\npattern no=>5\n\n");
	
	for(i=5;i>=1;i--)
	{
		for(k=5;k>i;k--)
		{
			printf("-");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n\npattern no=>6\n\n");
	
	for(i=5;i>=1;i--)
	{
		for(k=i;k>1;k--)
		{
			printf("-");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	printf("\n\npattern no=>7\n\n");
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			printf("-");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
	

