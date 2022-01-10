#include<iostream>
using namespace std;
class bank {
    int principal,interest,total;
    int rate;
    int time;
    public:
    
    bank() { }                  //this is the default constructor...

     bank(int p,int r,int t) {       //this is the parameterized constructor
        principal = p;
        rate = r;
        time =t;
        cout<<"this is solved by the parameterized constructor...\n "<<endl;
        cout<<"the principal of your class is = "<<p<<endl;
        cout<<"the rate of your class is = "<<r<<endl;
        cout<<"the time of your class is = "<<t<<endl;
        
        interest = (p*r*t)/100;
        cout<<"your interest is = "<<interest<<endl;
        
        total = p + interest; 
        cout<<"your total amount is = \n "<<total<<endl;
    }
    bank(bank &obj) {                                                       //this is copy constructor.
        cout<<"this is the copy constructor...\n"<<endl;
        cout<<"the principal of your class is = "<<obj.principal<<endl;
        cout<<"the rate of your class is = "<<obj.rate<<endl;
        cout<<"the time of your class is = "<<obj.time<<endl;
        
        obj.interest = (obj.principal*obj.rate*obj.time)/100;
        cout<<"your interest is = "<<obj.interest<<endl;
        
        obj.total = obj.principal + obj.interest; 
        cout<<"your total amount is = "<<obj.total<<endl;

    }
};

int main() {
    bank bd1;
    int p,r,t;
    cout<<"enter the principal:"<<endl;
    cin>>p;
    cout<<"enter the rate: "<<endl;
    cin>>r;
    cout<<"enter the time:" <<endl;
    cin>>t;
    bd1 = bank(p,r,t);
    
    bank bd2(bd1);
}