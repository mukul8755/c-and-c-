#include<iostream>
using namespace std;
class A {
	int a,b,sum;
	public:
		void set_data(int n1,int n2) {
			a=n1;
			b=n2;
		}
		friend class B;
		friend class C;
		friend void mul(A o);
		friend void div(A o1);
};
class B {
	public:
	void display( A n) {
		n.sum =n.a+n.b;
		cout<<"the sum of given number is = "<<n.sum<<endl;
			
	}
};
class C {
	public:
	void display1( A n1) {
		n1.sum =n1.a-n1.b;
		cout<<"the sub of given number is = "<<n1.sum<<endl;
			
	}
};
void mul(A o) {
	o.sum =o.a*o.b;
	cout<<"the multiply of two number: = "<<o.sum<<endl<<endl;
	
}
void div(A o1) {
	o1.sum =o1.a/o1.b;
	cout<<"the divide of two number: = "<<o1.sum<<endl;
}
int main()
{
	A a1;
	a1.set_data(120,14);
	B s;
	s.display(a1);
	C a2;
	a2.display1(a1);
	mul(a1);
	div(a1);
	return 0;
	
}
