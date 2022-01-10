//wap to print the fabboboci series in n terms..
#include<iostream>
using namespace std;
int main()
{
    int n,t1=0,t2=0,res,i;
    cout<<"enter number of terms:";
    cin>>n;
    
    for(i=0;i<=n;i++)
    {
        t1=t2;
        t2=res;
        res=t1+t2;
        cout<<res<<"\t";
    }
}