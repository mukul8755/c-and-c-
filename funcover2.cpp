//wap to use the function over loading in c++...
#include<iostream>
using namespace std;

//to create the function area;
int area(int P,int r)
{
    return P+r;
}

//to create the function area but change the parameter..
int area(int r)
{
    return r;
}

int area(int a,int b,int c)
{
    return a*b*c;
}

int main()
{
    int l,b,r;
    int a,v,c;
    int r_area,c_circle,g;

    cout<<"enter the  first and second number : "<<endl;
    cin>>l>>b;
    cout<<"enter three number : "<<endl;
    cin>>a>>b>>c;
    cout<<"enter the number for print factorial : "<<endl;
    cin>>r;

    r_area=area(b,l);
    c_circle=area(r);
    g=area(a,b,c);


    cout<<"sum of first and second number = "<<r_area<<endl;
    cout<<"multiply of three number = "<<g<<endl;
    cout<<"print number = "<<c_circle<<endl;
}