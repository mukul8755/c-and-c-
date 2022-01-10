#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
 main(void) {
	ofstream out;
	char fname[100];
	float x,y,temp;
	cout<<"enter the file name:"<<endl;
	cin>> fname;
	out.open(fname,ios::out || ios::binary);
	x=1.5;
	y=2.5;
	cout<<"x                temp"<<endl;
	cout<<"---------------------"<<endl;
	while(x<=y) {
		temp x+y;
		out<<x<<'\t'<<temp<<endl;
		cout<<x<<'\t'<<temp<<endl;
		x=x+1.5;
	}
	out.close();
} 
