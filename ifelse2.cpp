//wap to check the character is vowel or constonent...


#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"enter the alaphabet:";
    cin>>a;
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        cout<<"this letter is vowel";
    }
    else
    {
        cout<<"this is constonent";
    }
    return 0;
    
}