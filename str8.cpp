//wap to accept the string in c++
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[200],b[100];
    cout<<"enter your name without space:"<<endl;
    cin>>a;
    strcpy(b,a);
    strrev(b);
    if( strcmp(a,b) ==0)
    {
        cout<<"string is polindrome";
    }
    else
    {
        cout<<"string is not polindrome";
    }
}
    
    
    