#include<iostream>
using namespace std;
int main() {
	float c,f;
	cout<<"enter the celcius:"<<endl;
	cin>>c;
	f = (c*9/5)+32;
	c= (f-32) * 5/9;
	cout<<"the temperature in fehrenheit = "<<f<<endl;
	return 0;
}
