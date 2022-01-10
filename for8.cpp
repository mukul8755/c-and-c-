//wap to calculate the factorial...
#include<iostream>
using namespace std;
int main ()
{
    long int i,n,fact=1;
    cout<<"enter the number:";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<"factorial = "<<fact;
}