//wap to accept the string in c++
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[200],b[100];
    cout<<"enter your name without space:"<<endl;
    gets(a);
    cout<<"your name is = "<<a<<endl;
    strcpy(b,a);
    cout<<"name by the second variable:"<<endl;
    cout<<b<<endl;




}