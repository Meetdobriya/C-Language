/*WAP to create a basic calculator with +, -, *, /and %operations using switch case and UDF. Add never
ending functionality using loop.*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	int opr;
	do
	{
		cout<<"choose any operators:"
			"\n1.addition"
			"\n2.subtraction"
			"\n3.multiplication"
			"\n4.divison"
			"\n5.exit";
			cin >> opr;	
	switch(opr)
	{
		case 1:
			addition(int a[]);
			break;
		case 2:
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			divison();
			break;
		case 5:
			exit(0);
			break;				
	}
	while(opr!=7);		
	}		
}
void addition(int a[],int n)
{
	int n,sum=0;
	cout<<"enter total numbers for sum:";
	cin >> n;
	int a[n];
	cout<< "enter numbers:";
	for(int i=0;i<n;i++)
	{
		cout << "a["<<i<<"]:";
		cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	cout << "addition of numbers is :"<< a[i];
}
void subtraction(int a)
{
	int num1,num2,m;
	cout << "enter num 1:"
	cin >> num1;
	cout << "enter num 2:"
	cin >> num2;
	m=num1-num2;
	cout << "subtraction of"<<num1<<"and"<<num2<<"is:"<<m<< endl;
}
int multiplication(int a,int b)
{
	int num1,num2,m;
	cout << "enter num 1:"
	cin >> num1;
	cout << "enter num 2:"
	cin >> num2;
	m=num1*num2;
	cout << "multiplication of"<<num1<<"and"<<num2<<"is:"<<m<< endl;
	return m;
}
void divison(int a)
{
	int num1,num2,m;
	cout << "enter num 1:"
	cin >> num1;
	cout << "enter num 2:"
	cin >> num2;
	m=num1/num2;
	cout << "divison of"<<num1<<"and"<<num2<<"is:"<<m<< endl;
}


