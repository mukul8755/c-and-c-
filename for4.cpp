//wap to print the even number using the if condition in c++


#include<iostream>
using namespace std;
int main()
{
    int  i;
    for(i=0;i<=10;i++)
    {
        if(i%2==0)
        {
            cout<<i<<'\n';
        }
    }
    return 0;
}