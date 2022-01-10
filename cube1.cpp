//wap to calculate the power or a number:
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int b,p,ans;
    cout<<"enter the base of a number:";
    cin>>b;
    ans= pow(b,1.0/3.0);
    ans++;
    cout<<"cube = "<<ans;
    
}