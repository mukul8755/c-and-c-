#include<iostream>
using namespace std;
class A {
    public:
    void dis() {
        cout<<"this is the first base class"<<endl;
    }
};
class B {
    public:
    void dis_b() {
        cout<<"this is the second base class"<<endl;
    }
};
class C: public A,public B {
    public:
    void dis_c() {
        cout<<"this is derived class of A and B ."<<endl;
    }
}obj;




int main()
{
    obj.dis();
    obj.dis_b();
    obj.dis_c();
return 0;
}