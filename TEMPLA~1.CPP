#include<iostream>
#include<conio.h>
using namespace std;
template <class T=int>
class add {
	public:
	T a,b;
	add(T a1,T a2) {
		a = a1;
		b = a2;
	}
	void dis() {
		cout<<"the value of a:"<<a<<endl;
		cout<<"the value of :"<<b<<endl;
		T sum;
		sum = a+b;
		cout<<"the sum of given number:"<<sum<<endl;
	}
	
};
int main() {
	add<float> a1(10.12,20);
	a1.dis();
	getch();
}
