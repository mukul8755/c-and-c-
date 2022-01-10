//wap to writing in the file by the user input...


#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream out;
	char ch[100],line[1000];
	cout<<"enter the file name:"<<endl;
	cin>>ch;
	out.open(ch);
	cout<<"enter the line of the file: \n ";
	cin.get(line,1000,'@');
	out<<line;
	out.close();
	return 0;
	


	return 0;
		
}
