#include<iostream>
using namespace std;
class A {
	int a,b,sum;
	public:
		void get_data(int n1,int n2) {
			a=n1;
			b=n2;
		} 
		friend class B;
		friend void add(A s);
};
class B {
	public:
		void display(A o) {
			o.sum=o.a + o.b;
			cout<<"the sum of given number is = "<<o.sum<<endl;
			
		} 
};
void add(A s)
{
	s.sum = s.a-s.b;
	cout<<"substract of given number is = "<<s.sum<<endl;
}



int main() {
	A a1;
	a1.get_data(12,15);
	B a2;
	a2.display(a1);
	add(a1);
	return 0;
}
