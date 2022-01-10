#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	a=100;
	b=0;
	try {
		c= a/b;
		cout<<"the divide of the program:"<<c<<endl;
	}
	catch(exception e) {
		cout<<"the program will crashed : Reason:"<<endl;
	
	}
	return 0; 
	
}
