//wap to print the 1 to 10 number and 5 table:
#include<iostream>
using namespace std;

void even()
{
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<i<<'\t';
    }
}
void abc()
{
    char i;
    for(i=65;i<=90;i++)
    {
        cout<<i<<"\t";
    }
}
void nt()
{
    int n,i,tab;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        tab=n*i;
        cout<<tab<<endl;
    }
}




int main()
{
    int ch;
    cout<<"1.1 to 10 number print"<<endl;
    cout<<"2.print the a to z:"<<endl;
    cout<<"3.print the n table:"<<endl;
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
        even();
        break;
        case 2:
        abc();
        break;
        case 3:
        nt();
        break;
    }

}