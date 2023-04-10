// find odd elements from given 1d array
#include<iostream>
using namespace std;
int main()						
{
	int n,i;
	cout << "enter array size:";
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout << "enter value";
		cin >> a[i];
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout << a[i];
			cout << "\n";
		}	
	}	
}
