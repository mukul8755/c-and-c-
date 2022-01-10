//wap to use the array ...
#include<iostream>
using namespace std;
int main()
{

    //assign the array by given value
    int a[5],i;
    
    for(i=1;i<=5;i++)
    {
        cout<<"enter "<<i<<" number: = ";
        cin>>a[i];

    }
    cout<<"your number is = "<<endl;
    for(i=1;i<=5;i++)
    {
        cout<<a[i]<<endl;
    }

}