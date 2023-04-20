// project 4 builder
// program 6
#include<iostream>
using namespace std;
class demo{
	private:
		int id;
		string name;
	public:
		void setdata()
		{
			cout<< " enter id:";
			cin >> id;
			cout << "enter name:";
			cin >> name;
		}
		demo(){
			cout << "WELOME TO THE CLASS !!"<<endl;
		}
		void getdata(){
			cout << "id is:\t "<< id << endl
				 << "name is:\t "<< name << endl;
		}	
};
int main(){
	
	demo d1;
	d1.setdata();
	d1.getdata();
	demo d;
}

