//wap to print ten natural number sum using the while loop;
#include<iostream>
using namespace std;
int main()
{
    int i=2,sum=0;
    while(i<=20)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<"sum = "<<sum;
return 0;
}