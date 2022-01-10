//wap to use the class in c++;
#include<iostream>
using namespace std;
class area
{
    public:

    int l,b;
    float area1;
};
class area2
{
    public:
    int r,area3;
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

    area2 rect1;
    cout<<"enter the radius of the circle:"<<endl;
    cin>>rect1.r;
    rect1.area3 = 3.14 * rect1.r*rect1.r;
    cout<<"area of the circle:"<<rect1.area3;

} 
