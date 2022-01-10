#include <iostream>
using namespace std; 
#include<conio.h> 
int sum(int a, int b=20){ 
return( a + b); 
} 
int main (){ 
int a = 100, b=200, result; 
result = sum(a, b);  //here a=100 , b=200 
cout << "Total value is :" << result << endl; 
result = sum(a);  //here a=100 , b=20(using default value) 
cout << "Total value is :" << result << endl; 
return 0; 
} 
  
