#include<iostream>
using namespace std;
class A {
	int a,b,sum1;
	public:
	void sum(int n1,int n2) {
		a=n1;
		b=n2;
		
	}
	friend class B;
};
class B {
	public:
	void display(A s) {
		cout<<"the value of the a:= "<<s.a<<endl;
		cout<<"the value of the b:= "<<s.b<<endl;
		s.sum1 = s.a+s.b; 
		cout<<"sum of given number is = "<<s.sum1<<endl;
	}
	
};




int main() {
	A a1;
	a1.sum(45,15);
	B b1;
	b1.display(a1);
	
	return 0;
}
