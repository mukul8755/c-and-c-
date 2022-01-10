#include<iostream> 
using namespace std;
class A{ 
  int x, y; 
 public: 
	//friend void display(A a); 
   void getdata(int val,int val1)  { 
   	cout<<"enter two number:"<<endl;
   	bal=x;
   	bal1=y;
  } 
}; 
void display(A a){ 
 cout<<bal<<bal1; 
}
int main(){ 
 A a; 
 int bal;
 int bal1;
 cin>>a.val>>cin a.val1;
 a.getdata(); 
 display(a);  
 return 0; 
} 
