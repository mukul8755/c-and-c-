//function overloading..


#include<iostream>
using namespace std;
int add(int a,int b);              //define the function..
int add(int c,double d);
int add(double e,int f);
void dis();

int add(int a,int b) {                 //defination of the function
    return (a+b);
} 
int add(int c,double d) {
     return (c+d);
    
} 
int add(double a,int b) {
    return (a+b);
} 
/*()
void dis() {
    cout<<"the value of a:"<<a<<endl;
    cout<<"the value of b:"<<b<<endl;
} */



                //calling the function...
int main() {
    cout<<"the sum of first function:"<<add(10,15)<<endl;
    cout<<"the sum of second function:"<<(float)add(15,15.20)<<endl;
    cout<<"the sum of third function:"<<(float)add(11.20,15)<<endl;

    
    return 0;
}