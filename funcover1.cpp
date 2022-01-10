//wap to use the function over loading in c++...
#include<iostream>
using namespace std;

//to create the function area;
int area(int P , int R)
{
    return P*R;
}

//to create the function area but change the parameter..
int area(int r)
{
    return 3.14*r*r;
}
int main()
{
    int l,b,r;
    int r_area,c_circle;
    cout<<"enter the  length and breath of rectangle : "<<endl;
    cin>>l>>b;
    cout<<"enter the radius of circle : "<<endl;
    cin>>r;
    r_area=area(b,l);
    c_circle=area(r);
    cout<<"area  of rectangle = "<<r_area<<endl;
    cout<<"area  of circle = "<<c_circle<<endl;
}