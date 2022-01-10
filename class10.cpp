//wap to use the function in class ....

#include<iostream>
#include<string.h>
using namespace std;

class class1
{
    public:
    int roll;
    string name;
    string add;


    void display()
    {
        cout<<"roll number of the student "<<roll<<endl;
        cout<<"name of the student "<<name<<endl;
        cout<<"address of the student "<<add<<endl;


    }
};




int main()
{
    class1 stu1;
    stu1.roll = 102;
    stu1.name = "mukul sharma";
    stu1.add = "udaygarhi";
    stu1.display();

}