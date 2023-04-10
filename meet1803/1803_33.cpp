#include<stdio.h>
//read data in file;
main()
{
	FILE *f1;
	
	f1 = fopen("C:\\Users\\r3\\Desktop\\meet.txt","r");
	int i;
	char name[50];
	
	for(i=0;i<5;i++)
	{
		fscanf(f1,"%s%d",&name,&i);
		printf("%s%d\n",name,i);
	}
}
