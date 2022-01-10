//wap to read the file by the user name input file..
#include<iostream>
#include<fstream>
using namespace std;
 main() {
 	ofstream out;
	ifstream in;
	char file[20];
	char ch;
	cout<<"enter the file name do you want to read:"<<endl;
	cin>>file;
	
	in.open(file);
	//in.open("ankur1.txt");
	if(in.fail()) {
		cout<<"the file is not exist"<<endl;
		exit(0);
		
	}
		while(!in.eof()) {
		ch = (char)in.get();
		cout.put(ch);
	}
}
