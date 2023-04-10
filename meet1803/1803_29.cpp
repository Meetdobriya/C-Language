#include<stdio.h>
struct employee
{
	int id;
	char name[50];
	int age;
	char role[50];
	char city[50];
	
};
void main()
{
	int n,i;
	printf("enter num of employee:");
	scanf("%d",&n);
	
	struct employee s[i];
	
	for(i=0;i<n;i++)
	{
		printf("enter id:\t");
		scanf("%d",&s[i].id);
		
		printf("enter name:\t");
		scanf("%s",&s[i].name);
		
		printf("enter age:\t");
		scanf("%d",&s[i].age);
		
		printf("enter course:\t");
		scanf("%s",&s[i].role);
		
		printf("enter city:\t");
		scanf("%s",&s[i].city);
		
	}
	
	printf("id\t\tname\t\tage\t\trole\t\tcity\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t\t",s[i].id);
		printf("%s\t\t",s[i].name);
		printf("%d\t\t",s[i].age);
		printf("%s\t\t",s[i].role);
		printf("%s\n",s[i].city);
			
	}
}
