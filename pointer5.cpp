//wap to use the pointer and print the table of n...
#include<iostream>
using namespace std;
int main()
{
   int n,i,tab;
   int* p;
   int* tab1;
   cout<<"enter the value of n:";
   cin>>n;
   p=&n;
   for(i=1;i<=10;i++)
   {
       tab=i*n;
       tab1=&tab;
       cout<<*tab1<<endl;
   } 
return 0;
}

