#include<iostream>
using namespace std;
class A {
	public:
	 int a;
	public:
		 A() {
		
		}
		void dis() {
			cout<<"the value of a is = "<<a<<endl;
		}
};
//int A :: a;

int main() {
	A a1;
	a1.dis();
	return 0;
}
