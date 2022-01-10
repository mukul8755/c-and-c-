// wap to input a number and find the  the  digit...
#include<iostream>
using namespace std;
int main()
{
    int no,r,a,b;
    cout<<"enter the number:";
    cin>>no;
    while(no>0)
    {
        b=no/10;
        no=no%10;
    }
   // cout<<no<<endl;
    cout<<b;
    return 0;
}
