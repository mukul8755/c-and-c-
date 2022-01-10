#include<iostream>
using namespace std;
class arr {
	public:
	int l,b;
	float area;
};


int main() {
	arr a1;
	cout<<"enter the length of the rectangle:"<<endl;
	cin>>a1.l;
	cout<<"enter the breath of the rectangle:"<<endl;
	cin>>a1.b;
	a1.area = a1.l*a1.b;
	cout<<"the area of the rectangle:"<<a1.area<<endl;
	
	return 0;
}
