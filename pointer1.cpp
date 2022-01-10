    
// wap to use the pointer to print the address of variable..
#include<iostream>
using namespace std;
int main()
{
    int i;
    int* p;
    i=10;
    p=&i;
    cout<<"value of i = "<<i<<endl;
    cout<<"address of i = "<<&i<<endl;
    cout<<"value of i by the pointer = "<<*p<<endl;
    cout<<"address  of i using pointer = "<<p<<endl;

}