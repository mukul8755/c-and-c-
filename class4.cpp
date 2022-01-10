//wap to use the class in c++;
#include<iostream>
using namespace std;
class area
{
    public:

    int l,b;
    float area1;
};
int main()
{
    area rect;
    cout<<"enter the length of the rectangle:"<<endl;
    cin>>rect.l;
    cout<<"enter the length of the rectangle:"<<endl;
    cin>>rect.b;
    rect.area1 =rect.l*rect.b;
    cout<<"area of rectangle: "<<rect.area1<<endl;


} 
