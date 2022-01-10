#include<iostream>
using namespace std;
int main() {
	int s,m,as;
	cout<<"enter the mark of science:"<<endl;
	cin>>s;
	cout<<"enter the mark of math:"<<endl;
	cin>>m;
	if(s>=33 && m<=33) {
		cout<<"you have got a cycle"<<endl;
	}
	else if(m>=33 && s<=33) {
		cout<<"you have got a bike"<<endl;
	}
	else if(s>=33 && m>=33 && s<100 && m<100) {
		cout<<"you have got a car"<<endl;
	}
	else {
		cout<<"you lost the change"<<endl;
	}
}
