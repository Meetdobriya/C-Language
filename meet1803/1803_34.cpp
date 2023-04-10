#include<stdio.h>
// print odd even prime data
main()
{
	FILE *f1,*f2,*f3;
	
	f1 = fopen("C:\\Users\\r3\\Desktop\\even.txt","a");
	f2 = fopen("C:\\Users\\r3\\Desktop\\odd.txt","a");
	f3 = fopen("C:\\Users\\r3\\Desktop\\prime.txt","a");
	
	int n,i,count=0;
	printf("write any number:");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		fprintf(f3,"%d",n);
	}
	else if(n%2==0)
	{ 
		fprintf(f1,"%d",n);
	}	
	else
	{
		fprintf(f2,"%d",n);
	}	
		
}
