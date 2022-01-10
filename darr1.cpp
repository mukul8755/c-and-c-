//wap to use the double array;
#include<iostream>
using namespace std;
int main()
{
    int a[2][2],i,j;
    cout<<"enter the number:";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"print the array:";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<a[i][j]<<"\t";
        }
    }

}