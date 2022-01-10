#include<iostream>
using namespace std;
class rectangle {
	int a,b;
	public:
		int sum() {
			a=10;
			b=20;
			a=a;
			b=b;
			return a+b;
		}
		void display() {
			cout<<"the value of a:"<<a<<endl;
			cout<<"the value of b:"<<b<<endl;
			cout<<"the sum of given number is:"<<sum()<<endl;
		}
};
int main() {
	rectangle r1;
	//r1.sum();
	r1.display();
	return 0;
}
