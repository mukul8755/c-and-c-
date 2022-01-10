//wap to use the pointer to pointer 
#include<iostream>
using namespace std;
int main()
{
    int a;
    int* p;
    int** r;
    cout<<"enter the number:"<<endl;
    cin>>a;

    p=&a;
    r=&p;
    cout<<"print the number:"<<a<<endl;

    cout<<**r<<endl;
}