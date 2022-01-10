#include<iostream>
using namespace std;
class stu {
	int age,roll;
	public:
	stu(int a,int r) {
		age = a ;
		roll = r;
	}
	void dis() {
		cout<<"the age of the student is = "<<age<<endl;
		cout<<"the roll of the student is  "<<roll<<endl;
	}
};


int main() {
	stu s1(12,15);
	s1.dis();
	return 0;
}
