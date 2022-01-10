//use the unary operator increasement operator..
//inside the class use the operator overloading ..


#include<iostream>
using namespace std;
class stu {
    public:
    int x ,y;
    public:
    stu() { }
    
    stu(int ag,int r) {
        x = ag;y =r;
    }
    
    void dis() {
        cout<<"the roll number of the student:"<<x<<endl;
        cout<<"the age  of the student:"<<y<<endl;

    }
    stu operator +(my op2);
    stu operator ,(my op2);
};
my my :: operator ,(my op2) {
    my temp;
    temp.x = op2.x;
    temp.y = op2.y;
    cout<<op2.x<<" "<<op2.y<,endl;
    return temp;
}
my my :: operator +(my op2) {
    my temp;
    temp.x= op2.x;
    temp.y = op2.y;
    return temp;

}





int main() {
    stu s1,s2(10,15),s3(20,25);
    cout<<"before the operator overloading:"<<endl;
    
    s1.dis();
    s2.dis();
    s3.dis();
    s1 = (s1,s2+s2,s3);
    cout<<"after the operator overloading:"<<endl;
    s1.dis();

    return 0;    
}