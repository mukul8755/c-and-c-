#include<iostream>
using namespace std;
class emp {
    int age, roll;
    public:
    emp(int a,int r) {
        age = a;
        roll = r;
    }
    void dis() {
        cout<<"the age of the employe:"<<age<<endl;
        cout<<"the roll of the employe:"<<roll<<endl;
    }
    void operator +=(emp);
};
void emp :: operator +=(emp ob1) {
    ob1.age += ob1.age;
}

int main() {
    emp s1(10,15);
    emp s2(10,20);
    cout<<"the first employ detail.."<<endl;
    s1.dis();
    cout<<"the second employ detail.."<<endl;
    s2.dis();
    s1+=s2;
    cout<<"the sum of first and second emply age:"<<endl;
    s1.dis();
    return 0;
}