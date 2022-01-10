//wap to print the 1 to 10 number and 5 table:
#include<iostream>
using namespace std;

void add(int a,int b)
{
    int sum;
    sum=a+b;
    cout<<sum<<endl;
}
void sub(int a , int b)
{
    int sum;
    sum=a-b;
    cout<<"substract  = "<<sum<<endl;
}
void mul(int a,int b)
{
    int sum;
    sum=a*b;
    cout<<"multiply of = "<<sum<<endl;
}
void div(int a,int b)
{
    int sum;
    sum=a/b;
    cout<<"divide of "<<sum<<endl;
}


int main()
{
    int ch,a,b;
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
        add(a,b);
        break;
        case 2:
        sub(a,b);
        break;
        case 3:
        mul(a,b);
        break;
        case 4:
        div(a,b);
        default:
        cout<<"invalid choice .. ";
    }

}