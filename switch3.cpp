#include<iostream>
using namespace std;
int main()
{
    int ch,a,b,res;
    cout<<"enter the first  number:"<<endl;
    cin>>a;
    cout<<"enter the second number:"<<endl;
    cin>>b;
    cout<<"1.addition"<<endl;
    cout<<"2.substraction"<<endl;
    cout<<"3.multiplication"<<endl;
    cout<<"4.divide"<<endl;
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
        res=a+b;
        cout<<"sum of given number is = "<<res<<endl;
        break;

        case 2:
        res=a-b;
        cout<<"substact of given number is = "<<res<<endl;
        break;

        case 3:
        res=a*b;
        cout<<"multiply of given number is = "<<res<<endl;
        break;

        case 4:
        res=a/b;
        cout<<"divide of given number is = "<<res<<endl;
        break;
       
        default:
        cout<<"invalid choice .. ";
    }

}