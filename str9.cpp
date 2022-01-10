//wap to accept the string in c++
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[200];
    cout<<"enter your phone number:"<<endl;
    cin>>a;
    if( strlen(a)==10)
    {
        cout<<"number is correct";
    }
    else
    {
        cout<<"number is not correct";
    }
}
    
    
    