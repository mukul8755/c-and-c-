#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class student {
	int stu_id;
	char n[100];
	int clas;
	int age;
	int phone;
	char section;
	public:
		 student() { 
		 cout<<"enter the student_id of the student:"<<endl;
		 cin>>stu_id;
		 cout<<"enter the name of the student:"<<endl;
	     cin>>n;
		 cout<<"enter the class of the student:"<<endl;
		 cin>>clas;
		 cout<<"enter the age of the student:"<<endl;
		 cin>>age;
		 cout<<"enter the phone of the student:"<<endl;
		 cin>>phone;
		 cout<<"enter the section of the student:"<<endl;
		 cin>>section;	
		}
		void store() {
			ofstream out("mukul10.txt");
			out<<"student_ id     name     class    age     phone    section"<<endl;
			out<<stu_id<<endl;
			out<<"the class of the student:"<<clas<<endl;
			out<<"the age of the student:"<<age<<endl;
			out<<"the phone of the student:"<<phone<<endl;
			out<<"the section of the student:"<<section<<endl;	
		}
};
int main() {
	student obj;
	obj.store();
	return 0;
}
