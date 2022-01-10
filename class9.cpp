//wap to use the inline function in c++\
/in line is a keyword..
#include<iostream>
using namespace std;


inline int add(int x,int y)         //this is inline function 
                                    //this is use the consume the time...
{
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}



int main()
{
    int a;cin>>a;
    int b;cin>>b;
    int result;
    result = add(a,b);
    cout<<"sum of two number is = "<<result;
} 