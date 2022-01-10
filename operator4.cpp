//use the unary operator increasement operator..


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
    void operator --(int);
    void dis() {
        cout<<"the roll number of the student:"<<roll<<endl;
        cout<<"the age  of the student:"<<age<<endl;

    }
};
void stu ::operator --(int) {
    age = age - 5;
    roll = roll - 5;

}




int main() {
    stu s1;
    cout<<"before the operator overloading:"<<endl;
    
    s1.dis();
    s1--;
    cout<<"after the operator overloading:"<<endl;
    s1.dis();

    return 0;    
}