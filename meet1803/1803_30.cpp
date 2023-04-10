#include<stdio.h>
//copy and pest data in file;
main()
{
	FILE *f1,*f2;
	
	f1 = fopen("C:\\Users\\r3\\Desktop\\meet.txt","r");
	f2 = fopen("C:\\Users\\r3\\Desktop\\meet.txt","a");
	int i;
	char name[50];
	
	
		fscanf(f1,"%s%d",&name,&i);
		printf("%s%d\n",name,i);
	
	printf("data from other file:\n");
	
	fprintf(f2,"\n%s%d\n",name,i);
}
