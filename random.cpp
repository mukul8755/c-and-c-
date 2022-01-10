#include<iostream>
#include<stdlib.h>

using namespace std;
int main() {
	int p=0,n,s;
	p=rand()%50;
	while(n>0) {
	cout<<"enter the number between 1 to 50:"<<endl;
	cin>>n;
	if(n>p) {
		cout<<"your number is to high"<<endl;
	}
	else if(n<p) {
		cout<<"your number is to low"<<endl;
	}
	
	else {
		cout<<"you crack the password"<<endl;
		cout<<"for back press 0"<<endl;
	}
}
	return 0;
}
