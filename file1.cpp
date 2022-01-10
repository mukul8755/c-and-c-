#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream out;
	out.open("mukul.txt");
	//out<<"this is the file operation \n";
	out<<"hello world \n ";
	out<<"mukul sharma";
	out.close();
	return 0;
}
