//wap to input the five number and find out the percentage


#include <iostream>
using namespace std;
int main()
{
    int math,physic,chemistry,english,hindi,mark;
    float total;
    cout<<"enter the math  marks:";
    cin>>math;

    cout<<"enter the physics  marks:";
    cin>>physic;

    cout<<"enter the chemistry  marks:";
    cin>>chemistry;

    cout<<"enter the english  marks:";
    cin>>english;

    cout<<"enter the hindi  marks:";
    cin>>hindi;

    mark=math+physic+chemistry+hindi+english;
    total=mark/5;

    if(total==33)
    {
        cout<<"D grade";
    }
    else if(total<50 && total>=34)
    {
        cout<<"C grade(third division";
    }
    else if(total<60 && total >=50)
    {
        cout<<"B grade(second division)";
    }
    else if(total<=75 && total>=60)
    {
        cout<<"A grade(first division)";
    }
    else if(total<33)
    {
        cout<<"F grade(fail)";
    }
    else
    {
        cout<<"your numbers is not valid";
    }
    return 0;

    
}