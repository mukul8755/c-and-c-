#include<iostream>
using namespace std;
class add{
    int a,b,sum;
    public:
    void get_data(int n1 , int n2)   {
    a=n1;
    b=n2;
    }
    friend void sum(add o);
};

void sum(add o) {
    int ch,n;
    while(ch>0) {
    cout<<"1.addition"<<endl;
    cout<<"2.substract"<<endl;
    cout<<"3.multiply"<<endl;
    cout<<"4.divide"<<endl;
    cout<<"enter the choice:"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
    o.sum = o.a +o.b;
    cout<<"sum of given number is = "<<o.sum<<endl;
    cout<<"for exit press 0 "<<endl;
    cin>>ch;
    break;

    case 2:
     o.sum = o.a - o.b;
    cout<<"substract of given number is = "<<o.sum<<endl;
    cout<<"for exit press 0 "<<endl;
    cin>>ch;
    break;

    case 3:
    o.sum = o.a * o.b;
    cout<<"multiply of given number is = "<<o.sum<<endl;
    cout<<"for exit press 0 "<<endl;
    cin>>ch;
    break;
    
    case 4:
    o.sum = o.a /o.b;
    cout<<"divide of given number is = "<<o.sum<<endl;
    cout<<"for exit press 0 "<<endl;
    cin>>ch;
        break;

    default:
    cout<<"invalid choice::..."<<endl;
        break;
        }
    }
}
int main() {
    add num;
    int n1,n2;
    cout<<"enter the first number:"<<endl;
    cin>>n1;
    cout<<"enter the second number:"<<endl;
    cin>>n2;
    num.get_data(n1,n2);

    sum(num);

}

