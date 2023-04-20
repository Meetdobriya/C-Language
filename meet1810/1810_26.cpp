// project 4 builder
// program 4
#include<iostream>
using namespace std;
class highschool{
    private:
        int id;
        string name;
        int roll;
        int standrd;
        int age;
        int contact;
        string ename;
        string address;
    public:
        void setdata(){
            cout << "enter id:";
            cin >> id;
            cout << "enter name:";
            cin >> name;
            cout << "enter roll num:";
            cin >> roll;
            cout <<"enter standerd:";
            cin >> standrd;
            cout << "enter age:";
            cin >> age;
            cout << "enter contact:";
            cin >> contact;
            cout << "enter institute name:";
            cin >> ename;
            cout << "enter address:";
            cin >> address;
        }
        void getdata(){
            cout << "id\t: "<< id<<endl
                 << "name\t: "<< name<<endl
                 << "roll num\t: "<<roll <<endl
                 << "standerd \t: "<< standrd<< endl
                 << "age\t: "<< age<< endl
                 << "contact\t:contact "<< contact<< endl
                 << "institute name\t: "<<ename<<endl
                 << "address\t: "<< address<<endl;
                 
            }
};
class college{
    private:
        int id;
        string name;
        int roll;
        int standrd;
        int age;
        int contact;
        string ename;
        string address;
    public:
        void setdata(){
            cout << "enter id:";
            cin >> id;
            cout << "enter name:";
            cin >> name;
            cout << "enter roll num:";
            cin >> roll;
            cout <<"enter standerd:";
            cin >> standrd;
            cout << "enter age:";
            cin >> age;
            cout << "enter contact:";
            cin >> contact;
            cout << "enter institute name:";
            cin >> ename;
            cout << "enter address:";
            cin >> address;
        }
        void getdata(){
            cout << "id\t: "<< id<<endl
                 << "name\t: "<< name<<endl
                 << "roll num\t: "<<roll <<endl
                 << "standerd \t: "<< standrd<< endl
                 << "age\t: "<< age<< endl
                 << "contact\t:contact "<< contact<< endl
                 << "institute name\t: "<<ename<<endl
                 << "address\t: "<< address<<endl;
            }
};
int main(){
    highschool h1;
    college c1;
    h1.setdata();
    h1.getdata();
    c1.setdata();
    c1.getdata();
}

