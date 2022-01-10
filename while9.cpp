//wap to print the table using the while loop;
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"enter the number:";
    cin>>n;
    while(i<=10)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";
        i++;
    }

}