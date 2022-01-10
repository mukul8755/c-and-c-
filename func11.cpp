//function overloading..


#include<iostream>
using namespace std;
int add(int a,int b);              //define the function..
int add(int c,double d);
int add(double e,int f);

int add(int a,int b) {                 //defination of the function
    return (a+b);
} 
int add(int c,double d) {
     return (c+d);
    
} 
int add(double a,int b) {
    return (a+b);
} 
int(*p)(int a,int b) = add;
int(*p1)(int c,double d) = add;
int(*p2)(double a,int b) = add;



             //calling the function...
int main() {
    add(10,15);
    add(10,15.5);
    add(15.6,10);
    printf("%u",p1);

    
    return 0;
}