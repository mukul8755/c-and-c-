#include<iostream>
using namespace std;
class A {
	int a,b,sub;
	public:
		void get_data(int n1,int n2) {
			a=n1;
			b=n2;
		}
		friend void sub(A o);
};
void sub(A o) {
	o.sub = o.a-o.b;
	cout<<"the subtract of given number is:"<<o.sub<<endl;
}
int main() {
	A num1;
	num1.get_data(20,15);
	sub(num1);
	return 0;
}
