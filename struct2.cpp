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
   struct bank a1;
   struct bank  b;
   
    cout<<"bank A details fill"<<endl;
    cout<<"enter the acount number of the domain:"<<endl;
    cin>>a.ac;
    cout<<"enter the phone number of the domain:"<<endl;
    cin>>a.phone;
    cout<<"enter the pincode number of the domain:"<<endl;
    cin>>a.pincode;

    cout<<"bank a1 details fills"<<endl;
    cout<<"enter the acount number of the domain:"<<endl;
    cin>>a1.ac;
    cout<<"enter the phone number of the domain:"<<endl;
    cin>>a1.phone;
    cout<<"enter the pincode number of the domain:"<<endl;
    cin>>a1.pincode;
    cout<<"bank b details fills"<<endl;
    cout<<"enter the acount number of the domain:"<<endl;
    cin>>b.ac;
    cout<<"enter the phone number of the domain:"<<endl;
    cin>>b.phone;
    cout<<"enter the pincode number of the domain:"<<endl;
    cin>>b.pincode;



    cout<<"print the deatil of bank A:"<<endl;
    cout<<"domain acount number: "<<a.ac<<endl;
    cout<<"domain phone number: "<<a.ac<<endl;
    cout<<"domain pincode number: "<<a.ac<<endl;

    cout<<"print the deatil of bank A1:"<<endl;
    cout<<"domain acount number: "<<a1.ac<<endl;
    cout<<"domain phone number: "<<a1.ac<<endl;
    cout<<"domain pincode number: "<<a1.ac<<endl;


    cout<<"print the deatil of bank B:"<<endl;
    cout<<"domain acount number: "<<b.ac<<endl;
    cout<<"domain phone number: "<<b.ac<<endl;
    cout<<"domain pincode number: "<<b.ac<<endl;


}