#include<iostream>
using namespace std;
int main() {
	int i,n,m=0;
	cout<<"enter the number:"<<endl;
	cin>>n;
	for(i=2;i<=n-1;i++) 
	{
		if(n%i==0) 
		{
			cout<<"the number is not prime"<<endl;
			m=1;
			break;
		}
	}
		if(m==0) {
			cout<<"the number is prime"<<endl;
		}
}
