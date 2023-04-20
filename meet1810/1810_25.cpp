// project 4 builder
// program 3
#include<iostream>
using namespace std;
class hotel{
    private:
        int id;
        string name;
        string htype;
        int ssize;
        int rsize;
        int year;
        string address;
        int rating;
    public:
        void setdata(){
            cout << "enter id:";
            cin >> id;
            cout << "enter name:";
            cin >> name;
            cout << "enter type:";
            cin >> htype;
            cout <<"enter staff size:";
            cin >> ssize;
            cout << "enter room size:";
            cin >> rsize;
            cout << "enter estabish year:";
            cin >> year;
            cout << "enter address:";
            cin >> address;
            cout << "enter rating:";
            cin >> rating;
        }
        void getdata(){
            cout << "id\t: "<< id<<endl
                 << "name\t: "<< name<<endl
                 << "type\t: "<< htype <<endl
                 << "staff size\t: "<< ssize<< endl
                 << "room size\t: "<< rsize<< endl
                 << "establish year\t: "<< year << endl
                 << "address\t: "<<address<<endl
                 << "rating\t: "<< rating<<endl;
                 
            }
};
int main(){
    hotel h1;
    h1.setdata();
    h1.getdata();

}
