//wap to use the function find the sum of two accept number..
#include<iostream>
using namespace std;
void add(int a,int b)
{
    int sum;
    sum = a+b;
    cout<<"sum = "<<sum;
}
int main()
{
    int a,b;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    add(a,b);
}