//wap to calculate the sum of given number and using the multiple inheritance.



#include<iostream>
using namespace std;
class A {
    public:
    int a,b;
    void get_data() {
    a=30;
    b = 20;
    }
    void dis() {
        int sum;
        sum = a+b;
        cout<<"this is the first base class"<<endl;
        cout<<"the value of A:"<<a<<endl;
        cout<<"the value of B:"<<b<<endl;
        cout<<"the sum of given number = "<<sum<<endl;
    }
};
class B {
    
    public:
    int c1,c2;
    void get_b() {
        c1 =10;
        c2 =5;
    }
    void dis_b() {
        int sub;
        sub = c1-c2;
        cout<<"this is the second base class"<<endl;
        cout<<"the value of A:"<<c1<<endl;
        cout<<"the value of B:"<<c2<<endl;
        cout<<"the substraction:"<<sub<<endl;

    }
};
class C: public A,public B {
    public:
    void dis_c() {
        int mul,mul2;
        cout<<"this is derived class of A and B ."<<endl;
        mul = a*b;
        mul2 = c1*c2;
        cout<<"the  value of a:"<<a<<endl;
        cout<<"the  value of b:"<<b<<endl;
        cout<<"the multiplication of class A:= "<<mul<<endl;
        cout<<"the value of class B.."<<endl;
        cout<<"the value of c1 = "<<c1<<endl;
        cout<<"the value of c2 = "<<c2<<endl;
        cout<<"the multiplication of class B:= "<<mul2<<endl;
    }
}obj;




int main()
{
    obj.get_data();
    obj.dis();
    obj.get_b();
    obj.dis_b();
    obj.dis_c();
return 0;
}