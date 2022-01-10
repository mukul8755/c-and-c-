#include<iostream>
using namespace std;
class hello {
	public:
	int a,b,sum,sub,mul,div;
	float c,d;
	
		void getdata() {
			cout<<"enter the value of a:"<<endl;
			cin>>a;
			cout<<"enter the value of b:"<<endl;
			cin>>b;
			cout<<"enter the value of c:"<<endl;
			cin>>c;
			cout<<"enter the value of d:"<<endl;
			cin>>d;
		}
		void sum1() {
			sum = a+b;	
		}
		void sub1() {
			sub = a-b;
		}
		void mul1() {
			mul = a*b;
		}
		void div1() {
			div = a/b;
		}
		void display() {
			cout<<"the value of a:"<<a<<endl;
			cout<<"the value of b:"<<b<<endl;
			cout<<"the sum of (a+b):"<<sum<<endl;
			cout<<"the sub of (a-b):"<<sub<<endl;
			cout<<"the multiply of (a*b):"<<mul<<endl;
			cout<<"the divide of (a/b):"<<div<<endl;		
		}
};




int main() {
	hello h1;
	h1.getdata();
	h1.sum1();
	h1.sub1();
	h1.mul1();
	h1.div1();
	h1.display();
	float sum2,sub2,mul2,div2;
	sum2 = h1.c+h1.c;
	cout<<"the value of c:"<<h1.c<<endl;
	cout<<"the sum of (c+d):"<<sum2<<endl;
	return 0;
	
}
