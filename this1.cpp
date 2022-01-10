#include<iostream> 
using namespace std;
class add {
	int a ,b,sum;
	public:
		void get() {
			cout<<"enter the value of a = "<<endl;
			cin>>a;
			cout<<"enter  the value of b:"<<endl;
			cin>>b; 
		}
		void add1() {
			this->sum=this->a+this->b;
			cout<<"the sum of given number is = "<<this->sum<<endl;
		}
};

int main() {
	add a1;
	a1.get();
	a1.add1();
	
	return 0;
	
}
