//wap to use the class in c++;
#include<iostream>
using namespace std;
class add                       //define the class
{
    public:                     //access identifier
        int a,b;
        float sum;
};


int main()                  //this is the main function
{
    add deta;               //this is the data member
    add data1;
    add data2;
    add data3;

    //this is the value of data


    cout<<"enter the number";
    cin>>deta.a;
    cout<<"enter the number";
    cin>>deta.b;
    deta.sum = deta.a+deta.b;
    cout<<"sum of the number is = "<<deta.sum<<endl;
    
    data1.sum = deta.a-deta.b;
    cout<<"substaction of the number is = "<<data1.sum<<endl;

    data2.sum = deta.a*deta.b;
    cout<<"multiplication of the number is = "<<data2.sum<<endl;

    data3.sum = deta.a/deta.b;
    cout<<"divide of the number is = "<<data3.sum<<endl;



    return 0;


}