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
        cout<<"one"<<endl;
        break;
        case 2:
        cout<<"two"<<endl;
        break;
        case 3:
        cout<<"three"<<endl;
        break;
        case 4:
        cout<<"four"<<endl;
        break;
        case 5:
        cout<<"five"<<endl;
        break;
        case 6:
        cout<<"six"<<endl;
        break;
        case 7:
        cout<<"seven"<<endl;
        break;
        case 8:
        cout<<"eight"<<endl;
        break;
        case 9:
        cout<<"nine"<<endl;
        break;
        case 10:
        cout<<"ten"<<endl;
        break;
        default:
            cout<<"invalide number only input(1 to 10)"<<endl;
    }
}