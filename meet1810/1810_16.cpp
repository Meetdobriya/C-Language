//2. WAP to get and display 4 Cars information using class and object by including below mentioned attributes:
#include<iostream>
using namespace std;
class car{
	private:
		int id;
		string companyname;
		string colour;
		string model;
		int year; 
		
		public:
			void input(){
			
			cout<<"enter car id:";
			cin>>id;
			cout<<"enter company name:";
			cin>>companyname;
			cout<<"enter colour:";
			cin>>colour;
			cout<<"enter release year:";
			cin>>year;
			
		}
		void output(){
			cout<<"car id\t:"<<id<<endl
				<<"company name\t:"<<companyname<<endl
				<<"colour\t:"<<colour<<endl
				<<"release year\t:"<<year<<endl; 
		}
		
};
int main()
{
	car s1,s2,s3,s4;
	
	s1.input();
	s2.input();
	s3.input();
	s4.input();
	s1.output();
	s2.output();
	s3.output();
	s4.output();	
}
