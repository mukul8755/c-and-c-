//wap to print factorial number using the while loop;
#include<iostream>
using namespace std;
int main()
{
    int i=5,sum=1;
    while(i>=1)
    {
        sum=sum*i;
        i--;
    }
    cout<<"factorial = "<<sum;
return 0;
}