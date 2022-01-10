//wap to use the function find the sum of two accept number..
#include<iostream>
using namespace std;
void add()
{
    int a,b ,sum;
    int* p;
    int* r;
    int* t;
    cout<<"enter the first number:";
    cin>>a;
    p=&a;
    cout<<"enter the second number:";
    cin>>b;
    r=&b;
    sum = a+b;
    t=&sum;
    cout<<"sum = "<<*t;
}
int main()
{
    add();
}