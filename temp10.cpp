#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v1) {
	for(int i=0;i<v1.size();i++) {
		cout<<v1[i]<<"\t";
	}
}

int main() {
	vector <int> v1;
	int ele,i;
	cout<<"enter the five number:"<<endl;
	for(i=0;i<5;i++) {
		printf("enter %d number:",i+1);
		cin>>ele;
		v1.push_back(ele);
	}
	display(v1);
	cout<<endl<<"to delete the last element of the vector:"<<endl;
	v1.pop_back();
	display(v1);
	cout<<endl<<"to add the number:"<<endl;
	vector<int> :: iterator iter =  v1.end();
	v1.insert(iter,43);
	display(v1);
	
}
