// project 1 fundamental booter
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	cout<<"P-1. given string is numeric or not\n\n";
	char num[20];
	int i,count=0;
	cout << "enter any number:";
	cin>> num;
	for(i=0;i<strlen(num);i++)
	{
			if(num[i]=='0' || num[i]=='9')
			{
				count++;
			}
			
	}
	if(count>0)
	{
		cout<<"string is numeric";
	}
	else
	{
		cout<<"string is not numeric";
	}
		
}
