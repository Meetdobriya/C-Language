// make function void stringTogglecase
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
	
	for(int i=0;i<strlen(name);i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			name[i]-=32;
		
		}
		else if (name[i]>=65 && name[i]<=90)
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
	cout << name;
}
