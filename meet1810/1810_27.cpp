// project 4 builder
// program 5
#include<iostream>
using namespace std;
class india{
    private:
        string state;
        string city;
        string transport;
       static string population;
    public:
        void setdata(){
            cout << "enter state name:";
            cin >> state;
            cout << "enter city:";
            cin >> city;
            cout << "enter mode of transport:";
            cin >> transport;
        }
        static void changenum(string ppl){
            population = ppl;
            cout << "two hundred cr";
        }
        
        void getdata(){
            cout<< "state\t: "<< state<<endl
                << "city\t: "<< city<<endl
                << "transportation\t: "<< transport<<endl;
        }
};
string india :: population = "hundred cr";
int main()
{
    india i;
    i.setdata();
    i.getdata();
    india :: changenum(string ppl);
}
