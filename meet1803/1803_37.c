#include<stdio.h>
// revision of 2D array 
void main()
{
	int r,c;
	printf("enter number of row:");
	scanf("%d",&r);
	printf("enter number of column:");
	scanf("%d",&c);
	int a[r][c];
	int i,j;
	printf("\nenter array elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=>",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\narray is\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
	   		if(i==0 || i==r-1 || j==0 || j==c-1)
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
