#include<iostream>
using namespace std;
class A {
	int a,b;
	public:
		void get_data() {
			a=20;
			b=40;
		}
		void dis() {
			cout<<"the value of A  is = "<<a<<endl;
			cout<<"the value of B is = "<<b<<endl;
		}
		int sum () {
			int sum1;
			sum1 = a+b;
			cout<<"sum of given number is = "<<sum1<<endl;
		}
};


int main() {
	A b1;
	A *b2 = & b1;
	cout<<"the value is printing by dot(.) operator"<<endl;
	b1.get_data();
	b1.dis();
	cout<<"the value is printing by arrow (->) operator"<<endl;
	b2->get_data();
	b2 ->dis();
	b2->sum();
	return 0;
}
