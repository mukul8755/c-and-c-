//wap to use the case statement in the c++
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
        cout<<"sunday"<<endl;
        break;
        case 2:
        cout<<"monday"<<endl;
        break;
        case 3:
        cout<<"tuesday"<<endl;
        break;
        case 4:
        cout<<"wednesday"<<endl;
        break;
        case 5:
        cout<<"thrusday"<<endl;
        break;
        case 6:
        cout<<"friday"<<endl;
        break;
        case 7:
        cout<<"saturday"<<endl;
        break;
        default:
        cout<<"invalide number only input(1 to 7)"<<endl;


    }
}