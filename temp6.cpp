#include<iostream>
using namespace std;
class phone {
	public:
	int area;
	int exchange;
	int number;
	void get_data(double n) {
		number = n;
	}
	void display() {
	cout<<" ("<<area<<")"<<exchange<<"-"<<number<<endl;
		
	}
};
int main() {
	phone a1;
	double n;
	cout<<"enter the number:"<<endl;
	cin>>n;
	a1.get_data(n);
	a1.display();
	
	return 0;
}
