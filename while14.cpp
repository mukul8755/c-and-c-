//wap to print factorial number using the while loop;
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=1;
    cout<<"enter the number:";
    cin>>n;
    i=n;
    while(i>=1)
    {
        sum=sum*i;
        i--;
    }
    cout<<"factorial = "<<sum;
return 0;
}