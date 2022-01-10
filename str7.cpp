//wap to accept the string in c++
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[200],b[100];
    cout<<"enter your name without space:"<<endl;
    gets(a);
    cout<<"enter your second string:"<<endl;
    gets(b);
    if(strcmp(a,b) == 0)
    {
        cout<<"your name are same"<<endl;
    }
    else
    {
        cout<<"your name are not same"<<endl;
    }
    return 0;
    




}