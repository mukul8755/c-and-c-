//wap to check the number is a dingit or character...

#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"enter the number:";
    cin>>a;

    if (a<=65 && a>=92)
    {
        cout<<"this is the character";
    }
    else
    {
        cout<<"this is the digit";
    }
    return 0;

}