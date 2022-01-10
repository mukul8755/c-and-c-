#include<iostream>
using namespace std;
class emp {
    public:
    int age;
    emp() {
        age = 20;
    }
};
class b: public emp {
    public:
    int sal ;
    b() {
        sal =10;

    }
};

int main() {
    emp a1;
    b b1;
    cout<<"age of the employee:" <<b1.age<<endl;
    cout<<"salary of the employee:" <<b1.sal<<endl;
    return 0;

}