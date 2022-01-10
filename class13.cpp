
#include<iostream>
using namespace std;
class Add {
    public:
    int  a,b,res;
    void set_value(int num1,int num2) {
        a=num1;
        b=num2;

    }
    void display() {
    int ch;
    cout<<"1.addition"<<endl;
    cout<<"2.substraction"<<endl;
    cout<<"3.multiplication"<<endl;
    cout<<"4.divide"<<endl;
    cout<<"enter the choice:"<<endl;
    cin>>ch;
   
   switch (ch)
    {
            case 1:
            res=a+b;
            cout<<"sum of given number is = "<<res<<endl;
            break;
            case 2:
            res=a-b;
            cout<<"substract of given number is = "<<res<<endl;
            break;
            case 3:
            res=a*b;
            cout<<"multiply of given number is = "<<res<<endl;
            break;
            case 4:
            res=a/b;
            cout<<"divide of given number is = "<<res<<endl;
            break;

            default:
            cout<<"invalid choice:"<<endl;
            break;
        }
    }
};
int main()
{
    Add sum;
    int ch,a,b;
    cout<<"enter the number:"<<endl;
    cin>>a;
    cout<<"enter the number:"<<endl;
    cin>>b;
    sum.set_value(a,b);
    sum.display();
}
