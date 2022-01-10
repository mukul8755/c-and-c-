#include<iostream>
using namespace std;
void squ(int a) {
	int squ;
	squ=a*a;
	cout<<"the square of a number is = "<<squ;
}

int main() {
	int a;
	cout<<"enter the number:"<<endl;
	cin>>a;
	squ(a);
	return 0;
}
