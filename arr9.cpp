#include<iostream>
using namespace std;
#define MAX 100
class emp {
	int no,age;
	public:
		void get() {
			cout<<"enter the number of the employee:" <<endl;
			cin>>no;
			cout<<"enter the age of the employee:" <<endl;
			cin>>age;
		} 
		void dis() {
			cout<<"the number of the employee = "<<no<<endl;
			cout<<"the age of the employee = "<<age<<endl;
		}
};


int main() {
	emp obj[MAX];
	int i;
	cout<<"add the employee data.."<<endl;
	for(i=0;i<2;i++) {
		obj[i].get();
	}
	cout<<"display the employ record..."<<endl;
	for(i=0;i<2;i++) {
		obj[i].dis();
	}
	
	return 0;
}
