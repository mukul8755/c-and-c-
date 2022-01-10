//wap to read the file by the user name input file..
#include<iostream>
#include<fstream>
using namespace std;
 main() {
 	ofstream out;
	ifstream in;
	char file[20],file1[20];
	char ch,uch;
	cout<<"enter the file name do you want to read:"<<endl;
	cin>>file;
	cout<<"the new file name:"<<endl;
	cin>>file1;
	
	in.open(file);
	out.open(file1);
		while(!in.eof()) {
		ch = (char)in.get();
		uch = tolower(ch);
		//cout.put(uch);
		out.put(uch);
	}
	out.close();
	in.close();
}
