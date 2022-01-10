//wap to use the class in c++;
#include<iostream>
using namespace std;
class add
{
    public:
        int a,b;
        float sum;
};


int main()
{
    add deta;
    cout<<"enter the number";
    cin>>deta.a;
    cout<<"enter the number";
    cin>>deta.b;
    deta.sum = deta.a+deta.b;
    cout<<"sum of the number is = "<<deta.sum<<endl;
    return 0;


}