//wap to use the union in c++
#include<iostream>
using namespace std;

union  mukul1
{
    int roll ;
    char name[100];
    float mark;
};
int main()
{
    union mukul1 stu1;
    cout<<"enter the roll number of the student:"<<endl;
    cin>>stu1.roll;
    cout<<"enter the name of the student:"<<endl;
    gets(stu1.name);
    cout<<"enter the marks of the student:"<<endl;
    cin>>stu1.mark;


    cout<<"print the studend detail..."<<endl;
    cout<<"roll number of the student: "<<stu1.roll<<endl;
    cout<<"name of the student = "<<stu1.name<<endl;
    cout<<"mark of the student = "<<stu1.mark<<endl;
}