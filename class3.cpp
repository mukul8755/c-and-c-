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

    //this is the value of data

    cout<<"for addition data:"<<endl;
    cout<<"enter the first number:"<<endl;
    cin>>deta.a;
    cout<<"enter the  second number:"<<endl;
    cin>>deta.b;
    deta.sum = deta.a+deta.b;
    cout<<"sum of the number is = "<<deta.sum<<endl<<"\n";


    add data;

    cout<<"for substraction data:"<<endl;
    cout<<"enter the first number:"<<endl;
    cin>>data.a;
    cout<<"enter the  second number:"<<endl;
    cin>>data.b;
    data.sum = data.a-data.b;
    cout<<"sum of the number is = "<<data.sum<<endl<<"\n";


    add data1;

    cout<<"for multiplication data:"<<endl;
    cout<<"enter the first number:"<<endl;
    cin>>data1.a;
    cout<<"enter the  second number:"<<endl;
    cin>>data1.b;
    data1.sum = data1.a*data1.b;
    cout<<"multiply of the number is = "<<data1.sum<<endl<<"\n";


    add data2;

    cout<<"for divide data:"<<endl;
    cout<<"enter the first number:"<<endl;
    cin>>data2.a;
    cout<<"enter the  second number:"<<endl;
    cin>>data2.b;
    data2.sum = data2.a/data2.b;
    cout<<"divide of the number is = "<<data2.sum<<endl<<"\n";




    
    
    



    return 0;


}