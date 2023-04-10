// project- inliner 3. WAP to find factorial using recursion.
#include<iostream>
using namespace std;
int  fact(int n){
	if (n<1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
	
}
int main()
{
	int a,n;
	cout << "enter any number:";
	cin>>a;
	fact(a);
	cout << "factorial is : "<< fact(a)<< endl;		
}
