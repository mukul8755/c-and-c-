#include<iostream>
using namespace std;
class A {
	int a,b,sum;
	public:
	A() {					//assign the value in compile time ...
		/*
		a=10;
		b=20;
		sum=a+b;
		cout<<"the sum of given number is = "<<sum<<endl;
		*/
		
					//input the value in run time ...\
		
		cout<<"enter the first number:"<<endl;
		cin>>a;
		cout<<"enter the second number:"<<endl;
		cin>>b;
		sum=a+b;
		cout<<"the sum of given number = "<<sum<<endl;
		
	}
};

class B {
	int a,b,sub;
	public:
			B(int a,int b) {
				sub=a-b;
				cout<<"the sub of given number:"<<sub<<endl;
			}
};



int  main() {
	A a1;
	B b1(15,13);
	return 0;
}
