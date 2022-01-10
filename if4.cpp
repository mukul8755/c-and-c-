#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the year:";
    cin>>num;
    if(num%4==0)
    {
        cout<<"leap year";
    }
    else
    {
        cout<<"simple year";
    }
    
}