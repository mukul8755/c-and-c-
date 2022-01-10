#include<iostream>
using namespace std;
int main()
{
    int p,r,t,si,ta;
    cout<<"enter the principal:"<<endl;
    cin>>p;
    cout<<"enter the rate:"<<endl;
    cin>>r;
    cout<<"enter the time:"<<endl;
    cin>>t;
    si=p*r*t/100;
    ta=si+p;
    cout<<"the simple interest is :"<<si<<endl;
    cout<<"the total amount is: "<<ta<<endl;
    return 0;


}