#include<iostream>
#include<fstream>
using namespace std;
int  main() {
	ofstream out;
	char name[100];
	cout<<"enter the file name:"<<endl;
	cin>>name;
	out.open(name);
	out<<"ankur sharma of the world"<<endl;
	return 0;
}
