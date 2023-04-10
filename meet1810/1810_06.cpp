//  make function void arraysquare 
#include<iostream>
using namespace std;

void arrayinput(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout << "enter a["<< i << "]:";
		cin >> a[i];
	}
}
void arrayoutput(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout << "a["<< i << "]:" << a[i] << endl;
	}
}
int arraysquare(int a[],int n)
{
	int sqr =0;	
	for(int i=0;i<n;i++)
	{
		sqr = a[i]*a[i];
	}
	return sqr;
}
int main()
{
	int n;
	cout << "enter size of array:";
	cin >> n;
	int a[n];
	
	arrayinput(a,n);
	arrayoutput(a,n);
	cout << "square :" << arraysquare(a,n) << endl;
}
