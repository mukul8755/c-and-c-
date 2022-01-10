//wap to use the class;
#include<iostream>
using namespace std;
class emp
{
    public:
    char name;
    int phone;
    int salary;
}

int main()
{
    emp emp1;
    cout<<"enter the name of the employ:"<<endl;
    gets(emp1.name);
}