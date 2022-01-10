#include<iostream>
#include<conio.h>
template<class T>
using namespace std;
class stu {
	public:
		T  name;
		stu(T n) {
			name = n;
		} 
		void dis() {
			cout<<"the name of the student:"<<name<<endl;
		}
};
	


int main() {
	stu <int> s1(10,15,10);
	s1.dis();
	
}
