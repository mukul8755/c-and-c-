#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
int ch,ch1;
while(1) {
    cout<<"1.addition"<<endl;
    cout<<"2.substraction"<<endl;
    cout<<"3.multiply"<<endl;
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch) {
        case 1:
        cout<<"addition"<<endl;
        cin>>ch1;
        if(ch1==27) {
            break;
        }
        case 2:
        cout<<"substract"<<endl;
        ch=getch();
        if(ch==27) {
            break;
        }
        case 3:
        cout<<"multiply"<<endl;
        ch=getch();
        if(ch==27) {
            break;
        }
        if(ch==111) {
            break;
        }
        default:
            cout<<"invalid choice"<<endl;
            break;
    }
}
}