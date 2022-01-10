#include<iostream>
using namespace std;
class base1 {
        int a,b;
        public:
        num() {
            cout<<"enter the number:"<<endl;
            cin>>a>>b;
        }
        num(int x,int y) {
            a=x;
            b=y;
        }
        void display() {
             cout<<"the value of a:"<<a<<endl;
             cout<<"the value of b:"<<b<<endl;
        }
};
int main() {
    num a1;
    a1.display();
    num a2(10,15);
    num a3(a1);
    a3.display();
    return 0;
}