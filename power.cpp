//wap to calculate the power or a number:
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int b,p,ans;
    cout<<"enter the base of a number:";
    cin>>b;
    cout<<"enter the power of a number:";
    cin>>p;
    ans= pow(b,p);
    cout<<ans;
}