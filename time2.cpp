#include<iostream>
using namespace std;
class time {
	int hour,minute;
	public:
		void get() {
			cout<<"enter the first time:"<<endl;
			cin>>hour>>minute;
		}
		
		time() {
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
	t1.get();
	int h,m;
	cout<<"enter the second time in hour:"<<endl;
	cin>>h;
	cout<<"enter the second time in minute:"<<endl;
	cin>>m;
	time t2(h,m);
	t3 = add(t1,t2);
	return 0;
}
