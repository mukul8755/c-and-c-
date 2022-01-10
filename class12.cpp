
#include<iostream>
using namespace std;
class Add {
    public:
    int  a,b,res;
    

};
int main()
{
    Add sum;
    int ch;
    cout<<"enter the number:"<<endl;
    cin>>sum.a;
    cout<<"enter the number:"<<endl;
    cin>>sum.b;
    cout<<"1.addition"<<endl;
    cout<<"2.substraction"<<endl;
    cout<<"3.multiplication"<<endl;
    cout<<"4.divide"<<endl;
    cout<<"enter the choice:"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
       sum.res=sum.a+sum.b;
        cout<<"sum of given number is = "<<sum.res<<endl;
        break;
    case 2:
       sum.res=sum.a-sum.b;
        cout<<"substract of given number is = "<<sum.res<<endl;
        break;
    case 3:
       sum.res=sum.a*sum.b;
        cout<<"multiply of given number is = "<<sum.res<<endl;
        break;
    case 4:
       sum.res=sum.a/sum.b;
        cout<<"divide of given number is = "<<sum.res<<endl;
        break;
    
    default:
     cout<<"invalid choice:"<<endl;
        break;
    }
    

}