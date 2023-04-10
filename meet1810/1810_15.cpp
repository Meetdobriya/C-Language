//1. WAP to get and display 5 Employees information using class and object by including below mentioned attributes:
#include<iostream>
using namespace std;

class employee{
	private:
		int id;
		string name;
		string role;
		int age; 
		int salary;
		int experience;
		string city;
		string companyname;
		public:
			void input(){
			
			cout<<"enter id:";
			cin>>id;
			cout<<"enter name:";
			cin>>name;
			cout<<"enter role:";
			cin>>role;
			cout<<"enter age:";
			cin>>age;
			cout<<"enter salary:";
			cin>>salary;
			cout<<"enter experience year:";
			cin>>experience;
			cout<<"enter city:";
			cin>>city;
			cout<<"enter company name:";
			cin>>companyname;
		}
		void output(){
			cout<<"id\t:"<<id<<endl
				<<"name\t:"<<name<<endl
				<<"role\t:"<<role<<endl
				<<"age\t:"<<age<<endl
				<<"salary\t:"<<salary<<endl
				<<"experience year\t:"<<experience<<endl
				<<"city\t:"<<city<<endl
				<<"comopany name\t:"<<companyname<<endl; 
		}
		
};

int main()
{
	employee s1,s2,s3,s4,s5;
	
	s1.input();
	s2.input();
	s3.input();
	s4.input();
	s5.input();
	s1.output();
	s2.output();
	s3.output();
	s4.output();
	s5.output();	
}
