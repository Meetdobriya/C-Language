#include<stdio.h>
//write data in file;
main()
{
	FILE *f1;
	
	f1 = fopen("C:\\Users\\r3\\Desktop\\meet.txt","w");
	int i;
	for(i=0;i<5;i++)
	{
		fprintf(f1,"newdata %d\n",i);
	}
	
}
