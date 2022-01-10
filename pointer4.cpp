//wap to use the pointer and print the table of 5...
#include<iostream>
using namespace std;
int main()
{
   int a=5;
   int* p;
   p=&a;
   while(a<=50)
   {
       cout<<*p<<endl;
       *p =*p+5;
   } 
return 0;
}

