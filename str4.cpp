//wap to accept the string in c++
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[200];
    cout<<"enter your name without space:"<<endl;
    gets(a);
    cout<<"print the name:"<<endl;
    cout<<a<<endl;
    cout<<"length  of your name:"<<endl;
    cout<<strlen(a)<<endl;

}