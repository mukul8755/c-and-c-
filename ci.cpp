#include<iostream>
using namespace std;
int main() {
	int  p,t,ci,i,s;
	float r;
	cout<<"enter the principal:"<<endl;
	cin>>p;
	cout<<"enter the rate:"<<endl;
	cin>>r;
	cout<<"enter the time:"<<endl;
	cin>>t;
	s=p;
	for(i=0;i<t;i++) {
		s=s*(1+r);
		cout<<"compound interest = "<<p<<endl;
	}
	return 0;
}
