///wap to calculate the simple interest in the c++
#include<iostream>
using namespace std;
int main()
{
    int p,r,t,ta,si;
    cout<<"enter the principal:";
    cin>>p;
    cout<<"enter the rate:";
    cin>>r;
    cout<<"enter the time:";
    cin>>t;
    si=(p*r*t)/100;
    ta=si+p;
    cout<<"simple interest = "<<si<<endl;
    cout<<"total amount:"<<ta;

}