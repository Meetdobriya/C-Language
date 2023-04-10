#include<stdio.h>
// viva program 6
main()
{
	FILE *f1,*f2;
	int n;
	char a[20];
	f1 = fopen("C:\\Users\\r3\\Desktop\\readfile.txt","r");
	f2 = fopen("C:\\Users\\r3\\Desktop\\newfile.txt","a");
	
	printf("enter any number:");
	scanf("%d",&n);
	fprintf(f1,"%s%d",a[20],n);
	
	fprintf(f2,"\nnumber %d\n",n);
			
}
