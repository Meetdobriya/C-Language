#include<stdio.h>

// revison of string => file handling (EVEN,ODD,PRIME)
void main()
{
	int n,i,count=0;
	FILE *p,*e,*o;
	
	p = fopen("C:\\Users\\r3\\Desktop\\prime.txt","a");
	e = fopen("C:\\Users\\r3\\Desktop\\even.txt","a");
	o = fopen("C:\\Users\\r3\\Desktop\\odd.txt","a");
	
	printf("enter any number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("prime number");
		fprintf(p,"prime %d\n",n);
	}
	else if(n%2==0)
	{
		printf("even number");
		fprintf(e,"even %d\n",n);
	}
	else
	{
		printf("odd number\n");
		fprintf(o,"odd %d\n",n);
	}
	printf("\n");
	
	
}
