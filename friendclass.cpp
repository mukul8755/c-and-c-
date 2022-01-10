#include<iostream>
using namespace std;
class demo {
	int m=5;
	friend class demo1;
};
class demo1 {
	public:
	void display(demo a) {
		
		cout<<"the value of m is = "<<a.m<<endl;
	}
};
int main() {
	demo c;
	demo1 b;
	b.display(c);
}
