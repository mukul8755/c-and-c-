#include<iostream>
using namespace std;

class add {
    public:
    int a,b;
    void get_data(int a1,int a2) {
        a=a1;
        b=a2;

    }
    void dis_a() {
        int sum;
        sum = a+b;
        cout<<"the value of A:"<<a<<endl;
        cout<<"the value of B:"<<b<<endl;
        cout<<"the sum of given number is = "<<sum<<endl;
    }
};
class sub: public add {
    public:
        int a,b;
        sub() {
            a=10;
            b=25;
        }
        
        void dis() {
            int sub1;
            sub1=a-b;
            cout<<"the value of C:"<<a<<endl;
            cout<<"the value of D:"<<b<<endl;
            cout<<"the substract of given number is = "<<sub1<<endl;
        }
};

int main() {
    sub a1;
    a1.get_data(10,15);
    a1.dis_a();
    a1.dis();
    return 0;
}