#include<stdio.h>
//viva program 5
struct employee
{
	int id;
	char name[50];
	char address [50];
	char email[50];
	int salary;
	char role[50];
	
	
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
		scanf("%s",&s[i].address);
		
		printf("enter city:\t");
		scanf("%s",&s[i].email);
		
		printf("enter id:\t");
		scanf("%d",&s[i].salary);
		
		printf("enter course:\t");
		scanf("%s",&s[i].role);
		
		
		
	}
	
	printf("id\t\tname\t\tage\t\trole\t\tcity\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t\t",s[i].id);
		printf("%s\t\t",s[i].name);
		printf("%s\t\t",s[i].address);
		printf("%s\t\t",s[i].email);
		printf("%d\t\t",s[i].salary);
		printf("%s\t\t",s[i].role);
			
	}
}
