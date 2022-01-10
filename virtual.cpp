#include<iostream>
using namespace std;
class A {
    int a;
    public:
     void print() {
        a=20;
        cout<<"the base1 of a: "<<a<<endl;
    }
};
class B:public A{
    int b;
    public:
    virtual void print() {
        b=10;
        cout<<"the base2 of B: "<<b<<endl;
    }
};



int main() {
    B *a1;
    B c1;
    A b1;
    a1 = &c1;
    a1->print();
    b1.print();
    return 0;
} 