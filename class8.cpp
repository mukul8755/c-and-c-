//wap to use the default argument in c++
#include<iostream>
using namespace std;


//this is the basic argument
/*
int add(int x,int y)
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
*/

//this is the defualt argument in the function./

int add(int x,int y,int z=0 , int g=0  ,int h=0)    //declare the five variable in function
{                                                   //you can declare n variable in function .
    return x+y+z+g+h;
}

int mul(int x,int y,int z=1 , int g=1  ,int h=1)    //declare the five variable in function
{                                                   //you can declare n variable in function .
    return x*y*z*g*h;
}




int main()
{
    cout<<"enter three number:";
    int a;cin>>a;
    int b;cin>>b;
    int c;cin>>c;
    int result,result1;
    result = add(a,b);
    result1=mul(a,b,c);
    cout<<"sum of two number is = "<<result<<endl;
    cout<<"multiply of three number is = "<<result1;
} 