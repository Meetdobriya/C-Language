// make function void stringTitlecase
#include<iostream>
#include<string.h>
using namespace std;
void stringinput(char name[])
{
	cout<<"enter name:";
	cin >> name;
}
void stringTitlecase(char name[])
{
	int count=0;
	if(name[0]>=97 && name[0]<=122)
		{
			name[0]-=32;
			
		}
	for(int i=1;i<strlen(name);i++)
	{
		
		if (name[i]>=65 && name[i]<=90)
		{
			name[i]+=32;
			
		}
			
	}
}
int main()
{

	char name[20];
	stringinput(name);
	stringTitlecase(name);
	cout <<name;
}
