#include<iostream>
using namespace std;
static int n =2;
class student {
	public:
		int i;
		int roll[];
		int phone[];
		//char name[];
	
		void get_n() {
			cout<<"how many student do you want to save:"<<endl;
		//	cin>>n;
		}
		void get_roll() {
			for(i=1;i<=n;i++) {
				cout<<"enter the roll of the "<<i<<" "<<"student"<<endl;
				cin>>roll[i];
			}
		}
		void get_phone() {
			for(i=1;i<=n;i++) {
				cout<<"enter the phone of the "<<i<<" "<<"student"<<endl;
				cin>>phone[i];
			}
		}
		void get_name() {
			for(i=1;i<=n;i++) {
				cout<<"enter the name of the "<<i<<" "<<"student"<<endl;
				//cin>>name[i];
			}
		}
		void display_roll() {
			for(i=1;i<=n;i++) {
				cout<<" the roll of the "<<i<<" "<<"student = "<<roll[i]<<endl;
			//	cout<<" the phone of the "<<i<<" "<<"student"<<name[i]<<endl;
				
			}
		}
			void display_phone() {
			for(i=1;i<=n;i++) {
			//	cout<<" the roll of the "<<i<<" "<<"student = "<<roll[i]<<endl;
				cout<<" the phone of the "<<i<<" "<<"student"<<phone[i]<<endl;
				
			}
		}
		
	
};

int main() {
	student s1;
	s1.get_n();
	s1.get_roll();
	s1.get_phone();
	//s1.get_name();
	s1.display_roll();
	s1.display_phone();
	
}
