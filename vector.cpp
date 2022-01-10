#include<iostream>
#include<vector>
using namespace std;
void dis(vector <int> v) {
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main() {
	vector <int>vec1;
	int ele,size;
	cout<<"enter the size of the vector:"<<endl;
	cin>>size;
	cout<<"enter the element in the vector:"<<endl;
	for(int i=0;i<size;i++) {
		cin>>ele;
		vec1.push_back(ele);
	}
	
	dis(vec1);
	vector<int> :: iterator iter = vec1.begin();
	vec1.insert(iter+2,10,566);
	dis(vec1);
	
	return 0;
}
