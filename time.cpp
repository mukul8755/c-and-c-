#include<iostream>
using namespace std;
class time {
	int hour,minute;
	public:
		time( ) {
			hour = 10;
			minute = 50;
		}
		time(int h,int m) {
			hour = h;
			minute = m;
		}
		friend  time add(time c1 ,time c2);	
};
 time add(time c1,time c2) {
	time c3;
	
	c3.minute = c1.minute + c2.minute;
	c3.hour = c1.hour + c2.hour;
	c3.hour =c3.hour +  c3.minute/60;
	if (c3.hour>= 12) {
		c3.hour = c3.hour - 12;
	} 
	c3.minute = c3.minute % 60;
	
	cout<<"your first time is "<<c1.hour<<":"<<c1.minute<<endl;
	cout<<"your second time is "<<c2.hour<<":"<<c2.minute<<endl;
	cout<<"your addition time is "<<c3.hour<<":"<<c3.minute<<endl;	
}


int main() {
	time t1,t3;
	int h1,h2;
	time t2(1,2);
	add(t1,t2);
	return 0;
}
