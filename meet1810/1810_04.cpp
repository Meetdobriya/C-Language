// project 1 fundamental booter
#include<iostream>
using namespace std;

int main()
{
	cout<<"\n\nP-2.find leap year from 2000 to 3000\n\n";
	
	int i;
	for(i=2000;i<3000;i++)
	{
		if(i%4==0)
		{
			cout <<"leap year is : "<< i << endl;
		}
	}
}
