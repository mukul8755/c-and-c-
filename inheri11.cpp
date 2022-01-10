#include<iostream>
using namespace std;
class A {
    protected:
    int a,b;
    void get_a() {
        a=10;
        b=20;
    }
    public:
    void dis() {
        get_a();
        cout<<"the value of a is:"<<a<<endl;
        cout<<"the value of b is:"<<b<<endl;
    }
};
class B:protected A {
    public:
    void dis_b() {
       // get_a();

        cout<<"the value of a:"<<a<<endl;
        cout<<"the value of a:"<<b<<endl;
    }
}a1;



int main() {
    //a1.get_a();
    //a1.dis();
    a1.dis_b();
    return 0;
}


/*
                    public derived                  private derived         protected derived
1. private member : not inherited                   not inherited        not inherited   
2. protected member:  n protected                     private             protected
3. public member:      public                         private           protected

