#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector <int>v1;
	int ele,i;
	cout<<"enter the vector:"<<endl;
	for(i=0;i<4;i++) {
		cin>>ele;
		v1.push_back(ele);
	}
	cout<<"to display the vector.."<<endl;
	
	for(i=0;i<4;i++) {
		cout<<v1[i]<<"\t";
	}
}
