// project 4 builder
// program 12

#include<iostream>
using namespace std;
class employee{
    private:
        int id;
        string name;
        int salary;
    public:
        void setdata(){
            cout << "enter id:";
            cin >> id;
            cout << "enter name:";
            cin >> name;
            cout << "enter salary:";
            cin >> salary;
        }
        void getdata(){
            cout << "id\t: "<< id<<endl
                 << "name\t: "<< name<<endl
                 << "salary\t: "<< salary<<endl;
        }
};
int main(){
    int n,i;
    cout << "enter number of empl:";
    cin >> n;
    employee e[n];
    for(i=0;i<n;i++){
        e[i].setdata();
    }
    for(i=0;i<n;i++){
        e[i].getdata();
    }
}

