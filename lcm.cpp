#include<iostream>
using namespace std;
int main() {
	int n1,n2,gcd,i,lcm;
	cout<<"enter two number:"<<endl;
	cin>>n1>>n2;
	for(i=1;i<=n1 && i<=n2;i++) {
		if(n1%i==0 && n2%i==0) {
			gcd = i; 
		}
	}
	lcm = (n1*n2)/gcd;
	cout<<"the lcm of given number:"<<lcm<<endl;
	return 0; 
}
