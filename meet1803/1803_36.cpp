#include<stdio.h>
// revision of 1d array 
main()
{
	int n,i,count=0,sum=0;
	
	printf("enter array size:");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]=>",i);
		scanf("%d",&a[i]);
		count++;
		sum=sum+a[i];
	}	
	
	printf("\nARRAY\n");
	
	for(i=0;i<n;i++)
	{
		
		printf("a[%d]=>%d\n",i,a[i]);
	
	}
	
	printf("\ncount of array =>%d",count);
	printf("\nsum of array =>%d",sum);
}
