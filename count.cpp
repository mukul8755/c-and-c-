#include<iostream>
using namespace std;
int main() {
	int i,count=0;
	char name[10];
	cout<<"enter the name:"<<endl;
	cin.getline(name,100);
	cout<<"your name is:"<<name<<endl;
	for(char i=0;name[i]!='\0';i++) {
		cout<<(int)i<<endl;
			count++;
		
}
	cout<<"the length of the string is:"<<count<<endl;
 	return 0;
} 
