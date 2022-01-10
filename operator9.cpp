//wap to add two complex numeber using the operator overloading..


#include<iostream>
using namespace std;
class add {
    int a,b;
    public:
        add(int a1,int a2) {
            a=a1;b=a2;
        }
        void dis() {
            cout<<a<<"+"<<b<<"i"<<endl;
        }
        void operator +=(add ob1) {
            a += ob1.a;
            b += ob1.b;
        }

};



int main() {
    add a1(10,15);
    add a2(5,10);
    a1.dis();
    a2.dis();
    a1+=a2;
    a1.dis();
    return 0;
}