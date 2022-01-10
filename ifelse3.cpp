//wap to build the calculator using the if condition ..
#include<iostream>
using namespace std;
int main()
{
    int a,b,res,ch;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    cout<<"1.addition"<<endl;
    cout<<"2.substract"<<endl;
    cout<<"3.multiply"<<endl;
    cout<<"4.divide"<<endl;
    cout<<"enter the choice:";
    cin>>ch;
    if(ch==1)
    {
        res = a+b;
        cout<<a<<"+"<<b <<" = "<<res;
    }
    else if(ch==2)
    {
        res = a-b;
        cout<<a<<"-"<<b <<" = "<<res;
    }
    else if(ch==3)
    {
        res = a*b;
        cout<<a<<"*"<<b <<" = "<<res;
    }
    else if(ch==4)
    {
        res = a/b;
        cout<<a<<"/"<<b <<" = "<<res;
    }
    else
    {
        cout<<"invalid choice"<<endl;
    }
    

} 