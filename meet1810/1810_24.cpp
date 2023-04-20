// project 4 builder
// program 2
#include<iostream>
using namespace std;
class student{
    private:
        int id;
        string name;
        double per;
    public:
        void setdata(){
            cout << "enter id:";
            cin >> id;
            cout << "enter name:";
            cin >> name;
            cout << "enter per:";
            cin >> per;
        }
        void getdata(){
            cout << "id\t: "<< id<<endl
                 << "name\t: "<< name<<endl
                 << "per\t: "<< per <<endl;
        }
};
int main(){
    int n,i;
    cout << "enter number of student:";
    cin >> n;

    student s[n];
    for(i=0;i<n;i++){
        s[i].setdata();
    }
    for(i=0;i<n;i++){
        s[i].getdata();
    }

}
