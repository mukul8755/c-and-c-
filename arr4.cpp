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
   
    cout<<"your number is in reverse order = "<<endl;
    for(i=5;i>=1;i--)
    {
         cout<<a[i]<<endl;
    }

}