#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class calculator
{
    public:
    int a,b,res;
    void get_data();
    void sum();
    void sub();
    void mul();
    void div();
    

};
    void calculator :: get_data() {
        cout<<"enter the first number:";
        cin>>a;
        cout<<"enter the first number:";
        cin>>b;
    
    }

     void calculator :: sum() {
        int sum;
        sum=a+b;
        cout<<"sum of given number is:"<<sum<<endl;
    }

    void calculator :: sub() {
        int sub;
        sub=a-b;
        cout<<"substract of given number is:"<<sub<<endl;
    }

    void calculator :: mul() {
        int mul;
        mul=a*b;
        cout<<"multiply of given number is:"<<mul<<endl;
    }

    void calculator :: div() {
        float div;
        div=a/b;
        cout<<"divide of given number is:"<<div<<endl;
    }

int main()
{
    calculator c1;
    c1.get_data();
    int ch=1;
    while(ch>0) {
        cout<<"1.addition"<<endl;
        cout<<"2.substraction"<<endl;
        cout<<"3.multiplication"<<endl;
        cout<<"4.divide"<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            c1.sum();
            cout<<"press 0 to exit"<<endl;
            cin>>ch;
            break;
            case 2:
            c1.sub();
            cout<<"press 0 to exit"<<endl;
            cin>>ch;
            break;
            case 3:
            c1.mul();
         cout<<"press 0 to exit"<<endl;
            cin>>ch;
            break;
    case 4:
        c1.div();
         cout<<"press 0 to exit"<<endl;
            cin>>ch;
            break;
    default:
    cout<<"invalid choice given...";
    break;
       }
    }
    
}
