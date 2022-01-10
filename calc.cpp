#include<iostream>
using namespace std;
int main()
{
    int ch,a,b,sum;
    cout<<"enter the first number:"<<endl;
    cin>>a;
    cout<<"enter the second number:"<<endl;
    cin>>b;
    while (ch>0)
    {
    cout<<"1.addition"<<endl;
    cout<<"2.substract"<<endl;
    cout<<"3.multiply"<<endl;
    cout<<"4.divide"<<endl;
    cout<<"enter the choice:"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
    sum = a +b;
    cout<<"sum of given number is = "<<sum<<endl;
    cout<<"for exit press 0 "<<endl;
        break;
    case 2:
    sum = a - b;
    cout<<"substract of given number is = "<<sum<<endl;
    cout<<"for exit press 0 "<<endl;

    break;

     case 3:
    sum = a * b;
    cout<<"multiply of given number is = "<<sum<<endl;
    cout<<"for exit press 0 "<<endl;

        break;
    
     case 4:
    sum = a /b;
    cout<<"divide of given number is = "<<sum<<endl;
    cout<<"for exit press 0 "<<endl;
        break;

    default:
    cout<<"invalid choice"<<endl;
        break;
    }
    }
    return 0;
}