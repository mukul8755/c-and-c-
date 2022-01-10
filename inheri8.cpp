//wap to use the multilevel inheritance ..
#include<iostream>
using namespace std;
class A {
	public:
	int a,b;
		void get_data() {
			a=20;
			b=5;
		}
		void dis() {
			int sum ;
			sum =a+b;
			cout<<"the sum of given number:"<<sum<<endl;
		}
};
class B: public A {
	public:
		void dis_b() {
			int sub;
			sub =A::a-A::b;
			cout<<"substract of given number:"<<sub<<endl;
		}
};
class C: public B {
	public:
	int a,b;
	
	
		void dis_c() {
			int mul;
			mul =B::a*B::b;
			cout<<"multiply  of given number:"<<mul<<endl;
		}
};
class D: public C {
	public:
		
		void dis_d() {
			int div;
			div = B::a/C::b;
			cout<<"divide  of given number:"<<div<<endl;
		}
};



int  main()  {
	D a1;
	a1.get_data();
	a1.dis();
	a1.dis_b();
	a1.dis_c();
	a1.dis_d();
	return 0;
	
}
