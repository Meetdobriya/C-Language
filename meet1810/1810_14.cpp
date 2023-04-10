// project- inliner 4. WAP to illustrate the use of inline function by creating a function which prints a multiplication table of given number.
#include<iostream>
using namespace std;
void table(int a,int n){
	cout << "enter 2st aliments:"<< endl;
	for(int i=1;i<10;i++){
		cout<<"a"<<a<<"*"<<i<<"="<< a*i<<endl;
	}
}
inline void multi(table(a,10)){
	table(a,n);
}
int main()
{
	int a,n;
	cout << "enter any number:";
	cin>>a;
	multi(a,n);
	cout<<"table of your number is:"<<endl;
	cout<< multi(table(a,n))<< endl;
		
}
