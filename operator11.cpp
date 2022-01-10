#include<iostream>
using namespace std;
class add {
    int a,b;
    public:
    add(int a1,int b1) {
        a=a1;b=b1;
    }
    void dis() {
        cout<<a<<"*"<<b<<endl;
    }
    void operator *=(add a2) {
        a *=a2.a;
        b *=a2.b;
    }
};



int main() {
    add a3(10,15);
    a3.dis();
    add a4(5,10);
    a4.dis();
    a3*=a4;
    a3.dis();

    return 0;
}