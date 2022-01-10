#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
using  namespace std;
class stu {
	protected :
		char name[100];
		int age;
	public:
		void get_data();
		void display();
};
void stu::get_data() {
	cout<<"enter the name of the student(without space):"<<endl;
	cin>>name;
	cout<<"enter the age of the student:"<<endl;
	cin>>age;
}
void stu::display() {
	cout<<"the name of the student:"<<name<<endl;
	cout<<"the age of the student:"<<age<<endl;
}
 main() {
	stu obj;
	fstream in;
	char fname[10];
	cout<<"enter the file name:"<<endl;
	cin>>fname;
	in.open(fname,ios :: in || ios :: out);
	obj.get_data();
	in.open(fname,ios :: out);
	cout<<"storing into the file ..."<<endl;
	in.write((char*) &obj,sizeof(obj));
	in.close();

	in.open(fname,ios::in);
	cout<<"reading from the file.."<<endl;
	in.read((char*) &obj,sizeof(obj));
	obj.display();
	getch();
}
