//use the unary operator increasement operator..
//inside the class use the operator overloading ..


#include<iostream>
using namespace std;
class stu {
    public:
    float age,roll;
    public:
    stu() {
        age =10;
        roll=20;
    }
    void operator --() {
        age = age - 5;
        roll = roll - 5;
    }
    void dis() {
        cout<<"the roll number of the student:"<<roll<<endl;
        cout<<"the age  of the student:"<<age<<endl;

    }
};





int main() {
    stu s1;
    cout<<"before the operator overloading:"<<endl;
    
    s1.dis();
    --s1;
    cout<<"after the operator overloading:"<<endl;
    s1.dis();

    return 0;    
}