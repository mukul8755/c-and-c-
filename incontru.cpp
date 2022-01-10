#include<iostream>
using namespace std;
class Base1 {
    int data1;
    public:
    Base1(int x) {
        data1 = x;
        cout<<"the base1 class constructor called"<<endl;
    }
    void printData1(void) {
        cout<<"the value of data1 = "<<data1<<endl;
    }
};
class Base2 {
    int data2;
    public:
    Base2(int x1) {
        data2 = x1;
        cout<<"the base2 class constructor called"<<endl;
    }
     void printData2(void) {
        cout<<"the value of data2 = "<<data2<<endl;
    }
};
class derived:public Base1 , public Base2 {
    int data3,data4;
    public:
    derived(int a1,int a2,int a3,int a4) : Base1(a1),Base2(a2) {
        data3 = a3;
        data4 = a4;
    }
     void printData3() {
        cout<<"the value of data3 = "<<data3<<endl;
        cout<<"the value of data4 = "<<data4<<endl;
    }
};


int main() {
    derived a1(1,2,3,4);
    a1.printData1();
    a1.printData2();
    a1.printData3();
    return 0;
}