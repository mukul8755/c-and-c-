#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int i,j;
	string name[4];
	cout<<"enter your string:"<<endl;
	for( i=0;i<3;i++) {
		cin>>name[i];
	}
	//for printing the string....
	for(int i=0;i<3;i++) {
		cout<<"your full name is:"<<name[i]<<endl;
	}
	//to sorting the string...
	string temp = '\0';
	for(i=0;i<3;i++) {
		for(j=i+1;j<3;j++) {
			if(name[i]<name[j]) {
				cout<<name[i]<<endl;
				cout<<name[j]<<endl;
			}
	}
}
				/*
				
				temp = name[i];
				name[i]= name[j];
				name[j] = temp;
			}
		}
	}
	for(i=0;i<3;i++) {
		cout<<name[i]<<endl;
	}
	*/
}
