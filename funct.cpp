#include<iostream>
using namespace std;
template <typename T>
void get(T a1) {
	cout<<"the value of a:"<<a1<<endl;
}
int main() {
	get<int>(10);
	return 0;
}
