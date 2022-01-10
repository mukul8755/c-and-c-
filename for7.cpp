//wap to print the 1 to 10 table using the for loop;
#include<iostream>
using namespace std;
int main()
{
    int  i,j,tab;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            tab=i*j;
            cout<<tab<<"\t";
        }
    }
    return 0;
}