#include<conio.h>
#include<iostream>
using namespace std;
class myclass {
	int a;
	public:
		void set_a(int num);
		int get_a();
};
void myclass :: set_a(int num) {
	a=num;
}
	int myclass :: get_a() {
		return a;
	}
	
int main() {
	myclass u1;
	cout<<"enter the number:"<<endl;
	cin>>u1.set_a(12);
	
}
