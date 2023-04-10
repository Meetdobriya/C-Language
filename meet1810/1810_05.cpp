// project 1 fundamental booter
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	cout<<"\n\nP-3.find given string in toggel case\n\n";
	string name[20];
	int i;
	cout<<"enter any name:";
	cin>> name[20];
	
	for(i=0;i<strlen(name[20]);i++)
	{
		if(name[i]>=65 || name[i]<=90)
		{
			name[i]+=32;
			cout<<name;
		}
		else (name[i]>=97 || name[i]<=122)
		{
			name[i]-=32;
			cout<<name;
		}
	}
	
}
