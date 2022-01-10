#include<iostream>
using namespace std;
class hello {
	int a,b;
	public:
		void get_data() {
			cout<<"enter two number:"<<endl;
			cin>>a>>b;
		}
		void display();
		int  sum() {
			return a+b;
		}
};

void hello::display() {
	cout<<"the value of a:"<<a<<endl;
	cout<<"the value of b:"<<b<<endl;
	
	cout<<"the sum of given number:"<<sum()<<endl;
} 

int main() {
	hello obj;
	obj.get_data();
	obj.sum();
	obj.display();
	return 0;
	
}
