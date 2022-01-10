//wap to print ten natural number sum using the while loop;
#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum;
return 0;
}