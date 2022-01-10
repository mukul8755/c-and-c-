#include<iostream>
using namespace std;
class A {
    int a,b;
    public:
    void dis() {
        a=10;
        b=40;
        cout<<"the value of A is:"<<a<<endl;
        cout<<"the value of B is:"<<b<<endl;


    }
};
class B:public A {
    int c,d;
    public:
    void dis() {
        c=30;
        d=20;
        cout<<"the value of C is:"<<c<<endl;
        cout<<"the value of d is:"<<d<<endl;
    }
};


int main()
{
    B a1;
    a1.dis();
    a1.dis();
return 0;
}