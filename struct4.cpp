//wap to use the struct and find the sum of two number..
#include<iostream>
using namespace std;
struct  add
{
    int a,b,sum;
};
int main()
{
    struct add sum;
    int res;
    int* r;
    int* p;
    cout<<"enter the first number:"<<endl;
    cin>>sum.a;
    p=&sum.a;
    cout<<"enter the second number:"<<endl;
    cin>>sum.b;
    r=&sum.b;
    res=*r+*p;
    cout<<res;
}