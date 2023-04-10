// project- inliner 1. WAP to pass function as an argument to a function
#include<iostream>
using namespace std;

void input(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]:";
		cin >> a[i];
	}
}
void output(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
int sum(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	return sum;
}
void result (int n)
{
	cout<< "sum is :"<< n <<endl;
}
int main()
{
	int n;int a[n];
	cout << "enter array size:";
	cin>>n;
	input(a,n);
	output(a,n);
	result(sum(a,n));		
}
