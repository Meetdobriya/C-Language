// project 4 builder
// program 10
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
		demo(int id,string name){
			this->id = id;
			this->name =name; 
		}
		demo(int a){
			this->id= id;
			cout << "id\t:"<< a<<endl;
		}		
		void getdata(){
			cout << "id is:\t "<< id << endl
				 << "name is:\t "<< name << endl;
		}
			~demo(){
			cout << "THE END !!"<< endl;;
		}	
};

int main(){
	
	demo d1(1300,"meet");
	demo d2=d1;
	demo d3(2500);
	d1.getdata();
	d2.getdata();
	
}
