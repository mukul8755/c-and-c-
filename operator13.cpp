#include<iostream>
using namespace std;
class emp {
    int a,b;
    public:
    emp() {}
    emp (int a1,int a2) {
        a= a1;
        b=a2;
    }
    
    void dis() {
        cout<<a<< " "<<b<<endl;
    }
    friend emp operator +(emp,emp);
    friend emp operator -(emp,emp);

};
emp operator +(emp a1,emp a2) {
    emp temp;
    temp.a = a1.a + a2.a;
    temp.b = a2.b + a2.b;
    return temp;
}
emp operator -(emp a1,emp a2) {
    emp temp;
    temp.a = a1.a - a2.a;
    temp.b = a2.b - a2.b;
    return temp;
}





int main() {
    emp obj1(10,15);
    emp obj2(5,10);
    emp obj3,obj4;
    obj1.dis();
    obj2.dis();
    obj3 = obj1 + obj2;
    obj3.dis();
    obj4 = obj1 - obj2;
    obj4.dis();


    return 0;
}