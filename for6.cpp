//wap to print the table of n  number in c++

#include<iostream>
using namespace std;
int main()
{
    int i,n,tab;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        tab=i*n;
        cout<<n<<"*"<<i<<" = "<<tab<<"\n";
    }
}