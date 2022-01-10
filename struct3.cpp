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
    cout<<"enter the first number:"<<endl;
    cin>>sum.a;
    cout<<"enter the second number:"<<endl;
    cin>>sum.b;
    res=sum.a+sum.b;
    cout<<res;
}