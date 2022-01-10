#include<iostream>
#include<fstream>
using namespace std;
class student {
	char roll[100];
	int age;
	public:
		void get() {
			cout<<"enter the roll of the student:"<<endl;
			gets(roll);
			cout<<"enter the age of the student:"<<endl;		
			cin>>age;
		}
		void show() {
			cout<<"the roll of the student:"<<roll<<endl;
			cout<<"the age of the stuent:"<<age<<endl;
		}
}s1;
int main() {
	//student s1;
	s1.get();
		fstream file;
			file.open("student.dat",ios :: out |ios :: app);
				file.write((char*)&s1,sizeof(s1));
				file.open("student.dat",ios::in);
				file.read((char *) &s1,sizeof(s1));
				s1.show();
				
			
	return 0;
}
