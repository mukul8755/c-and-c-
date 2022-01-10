//wap to use the stuct in c++...
#include<iostream>
using namespace std;
struct bank
{
    int ac;
    int phone;
    int pincode;
};
int main()
{
   struct bank a;
    cout<<"enter the acount number of the domain:"<<endl;
    cin>>a.ac;
    cout<<"enter the phone number of the domain:"<<endl;
    cin>>a.phone;
    cout<<"enter the pincode number of the domain:"<<endl;
    cin>>a.pincode;


    cout<<"print the deatil of given domain:"<<endl;
    cout<<"domain acount number: "<<a.ac<<endl;
    cout<<"domain phone number: "<<a.ac<<endl;
    cout<<"domain pincode number: "<<a.ac<<endl;


}