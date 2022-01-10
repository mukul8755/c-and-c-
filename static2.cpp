#include<iostream>
using namespace std;
class add {
	static int count;
	void dis() {
		count++;
		cout<<"the number is static value: "<<count<<endl;
	}
	
};
int  main() {
	add a1;
	void add :: dis();
	return 0;
	
}
