#include<stdio.h>
// viva program 1 
void main()
{
	int r,c,i,j;
	printf("enter number of row :");
	scanf("%d",&r);

	printf("enter number of column:");
	scanf("%d",&c);
	
	int a[r][c];
	printf("enter array number");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=>",i,j);
			scanf("%d",&a[i][j]);
		}
	
	}
	printf("\n\nARRAY\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j||i+j==r-1)
			{
				printf("%d",a[i][j]);	
			}
			else
			{
				printf("*");
			}
			
		}
		printf("\n");
	}
		
}
