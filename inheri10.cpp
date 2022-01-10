#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    A(int a1,int a2) {
        a=a1;
        b=a2;
        cout<<"the first contructor called"<<endl;
    }
    void dis_a() {
        cout<<"the value of a:"<<a<<endl;
        cout<<"the value of b:"<<b<<endl;
    }
};
class B{
    int a,b;
    public:
    B(int a3,int a4) {
        a=a3;
        b=a4;
        cout<<"the second contructor called"<<endl;
    }
    void dis_b() {
        cout<<"the value of a:"<<a<<endl;
        cout<<"the value of b:"<<b<<endl;
    }
};
class Derived:public A,public B {
    int b1,b2;
    public:
    Derived(int x,int y,int z,int p,int e,int d):A(x,y),B(z,p) {
        b1 = e;
        b2 = d;
        cout<<"the third contructor called: "<<endl;
    }
    void dis_c() {
    cout<<"the value of a:"<<b1<<endl;
    cout<<"the value of b:"<<b2<<endl;
    }
};

int main() {
    Derived d1(1,2,3,4,5,6);
    d1.dis_a();
    d1.dis_b();
    d1.dis_c();
    return 0;
}