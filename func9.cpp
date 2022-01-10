#include<iostream>
using namespace std;

int add(int a,int b) {
    int res;
    res=a+b;
    cout<<"sum of two number:"<<res;

}

int sub(int a,int b) {
    int res;
    res=a-b;
    cout<<"substract of two number:"<<res;

}

int mul(int a,int b) {
    int res;
    res=a*b;
    cout<<"multiply of two number:"<<res;

}

int div(int a,int b) {
    int res;
    res=a/b;
    cout<<"divide of two number:"<<res;

}

int mod(int a,int b) {
    int res;
    res=a%b;
    cout<<"remainder of two number:"<<res;

}
int small(int a,int b) {
    if (a<b) {
        cout<<"a is smaller than b"<<endl;
    }
    else
    {
        cout<<"b is smaller than A "<<endl;
    }
    
}


int main() {
    int ch,a,b;
    cout<<"enter two number:"<<endl;
    cin>>a;
    cout<<"enter the second number:"<<endl;
    cin>>b;

    cout<<"1.addition"<<endl;
    cout<<"2.substraction"<<endl;
    cout<<"3.multiply"<<endl;
    cout<<"4.divide"<<endl;
    cout<<"5.modulo divition"<<endl;
    cout<<"6.largest and smallest"<<endl;
    cout<<"enter your choice:"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
    add(a,b);
    break;
    case 2:
    sub(a,b);
    break;
-    case 3:
    mul(a,b);
    break;
    case 4:
    div(a,b);
    break;
    case 5:
    mod(a,b);
    break;
    case 6:
    small(a,b);
    break;
   
    default:
    cout<<"invalid choice"<<endl;
        break;
    }

}