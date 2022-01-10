#include<iostream>
using namespace std;
class A {
	public:
	int a,b,sum;
	A(int n1,int n2) {
		a=n1;b=n2;
	}
	A(int n1) {
		a=n1;
	}
	A() {
	}
};


int main() {
	A a1(12,14);
	A b1(a1);
	cout<<"a= "<<b1.a<<endl;
	cout<<"b="<<b1.b<<endl;
	b1.sum = b1.a + b1.b;
	cout<<"the sum of given number is = "<<b1.sum<<endl;
	
	return 0;
}
