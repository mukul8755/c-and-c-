#include<bits/stdc++.h>
using namespace std;
void display(vector<int>  &v) {
	cout<<"show the element in the vector:"<<endl;
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main() {
	int ele,size;
	vector<int> v1;
	cout<<"enter the size of the element:"<<endl;
	cin>>size;
	cout<<"enter the element:"<<endl;
	for(int i=1;i<=size;i++) {
		cin>>ele;
		v1.push_back(ele);
	}
	vector<int> :: iterator iter = v1.end();
	//v1.insert(iter,544);
	display(v1);
	v1.pop_back();
	display(v1);
	return 0;
}
