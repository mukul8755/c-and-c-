//what is constructor..
//constructor is a special type function..
//it has name as a class of the object 
// it has no return type value of the constructor...
//there are three type of constructor ..


#include<iostream>
using namespace std;
class stu {
	public:
	int roll;
	int std;
	int phone;	
	stu() {
		cout<<"enter the roll number of the student :"<<endl;
		cin>>roll; 
		cout<<"enter the class of the student :"<<endl;
		cin>>std;
		cout<<"enter the phone of the student"<<endl;
		cin>>phone;
	}
};								//to create a class

int main()
{
	stu a1;
	cout<<"student roll number is ="<<a1.roll<<endl;
	cout<<"the class of the student = "<<a1.std<<endl;
	cout<<"the phone of the student = "<<a1.phone<<endl;
	return 0;
	
}
