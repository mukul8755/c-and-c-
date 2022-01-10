#include<iostream>
#include<vector>
using namespace std;
void dis(vector <int> v) {
	cout<<v[0];
}

int main() {
	vector <int> v1;
	int e;
	cout<<"enter the number:"<<endl;
	cin>>e;
	v1.push_back(e);
	dis(v1);
	
}
