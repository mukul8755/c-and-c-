#include<iostream>
using namespace std;
class A {
	int a;
	public:
		void get() {
			a=20;
		}
		void print() {
			cout<<"the address of a is "<<&a<<endl;
			cout<<"the address of A is "<<this<<"  using the this pointer"<<endl;
		}
};


int main(){ 
A a1;
a1.get();
a1.print();
	
	return 0;
}
