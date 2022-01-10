//multiple constructor in class..
//constructor overloading ..



#include<iostream>
using namespace std;
class stu {
    int a,b,c;
    public:
    stu() {
        a=5;
        b=10;
        c=12;
    }
    stu(int c1,int c2,int c3) {
        a=c1;
        b=c2;
        c=c3;
    }
    stu(int b1,float b2,int b3) {
        a=b1;
        b=b2;
        c=b3;
    }
    void dis() {
        cout<<"the value of A:"<<a<<endl;
        cout<<"the value of B:"<<b<<endl;
        cout<<"the value of C:"<<c<<endl;
    }
};
int main() {
    stu s1;
    stu s2(10,15,20);
    stu s3(25,30,35);
    cout<<"the first constructor called."<<endl;
    s1.dis();
    cout<<"the second constructor called"<<endl;
    s2.dis();
    cout<<"the third constructor callled"<<endl;
    s3.dis();
    return 0;
}
