///wap to show the data litral in the c++
#include<iostream>
using namespace std;
int main()
{
int a=10;
float b=34.6;
double c=10.99;
long double d= 23.9999;

cout<<"the size of int = "<<sizeof(10)<<endl;
cout<<"the size of float = "<<sizeof(34.6)<<endl;
cout<<"the size of double = "<<sizeof(10.99)<<endl;
cout<<"the size of long double = "<<sizeof(23.9999)<<endl;



//to see the float litrel in the copy ...


cout<<"the size of int = "<<sizeof(10i)<<endl;          //this is a long int ...because you use the I,i;
cout<<"the size of float = "<<sizeof(34.6)<<endl;       //this  is the double number by default value    
cout<<"the size of double = "<<sizeof(10.99f)<<endl;        //this is the floating number..  F,f use
cout<<"the size of long double = "<<sizeof(23.9999l)<<endl;  //this is the long double L,l use..


return 0;
}