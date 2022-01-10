    
// wap to use the pointer and find sum of given two number..
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum;
    int* p;
    int* r;
    cout<<"enter the first number:"<<endl;
    cin>>a;
    cout<<"enter the second value:"<<endl;
    cin>>b;

    //to store the address of a and b;
    
    p=&a;
    r=&b;
    
    sum = *p + *r;
    cout<<"sum of given number: "<<sum<<endl;


}
