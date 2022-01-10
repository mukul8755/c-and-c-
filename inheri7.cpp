//wap to implemention the multilevel inheritance..

#include<iostream>
using namespace std;
class A {
    public:
    void dis_a() {
        cout<<"hello class A."<<endl;
    }
};
class B: public A {
    public:
    void dis_b() {
        cout<<"hello class B."<<endl;
    }
};
class c: public B {
    public:
    void dis_C() {
        cout<<"hello class C."<<endl;
    }
}obj;





int main() {
    obj.dis_a();
    obj.dis_b();
    obj.dis_C();


}