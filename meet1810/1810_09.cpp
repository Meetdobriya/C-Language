// WAP to find factorial of all elements from given array using inline function.
#include<iostream>
using namespace std;
inline void arrayinput(int a[],int n){
	for(int i=0;i<n;i++){
		cout << "a["<< i << "]:";
		cin >> a[i];
	}
}
inline int arrayfacto(int a[],int n){
	int fact=1;
	for(int i=1;i<=n;i++{
		fact=fact*i;
	}
	return fact;
}
int main(){
	int n,a[n];
	cout << "enter size of array:";
	cin >> n; 
	arrayinput(a,n); 
	cout << "factorial of array :"<< arrayfacto(a,n);		
}




