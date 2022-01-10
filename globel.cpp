//wap to use the globel variable value with local variable value..
#include<iostream>
using namespace std;
int a=50,b=40;			//this is the globel decelation...


int main()
{
int a=20,b=30,c;		//this is the local variable//
//use the scope resolution operator to access the globel variable value.

c=a+b;
cout<<"this is the local variable sum = "<<c<<endl;

c=::a+::b;
cout<<"this is the globel variable sum = "<<c<<endl;





return 0;
}