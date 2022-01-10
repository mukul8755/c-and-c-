#include<iostream>
using namespace std;

class base1 {
	public:		
		base1() {
			cout<<"I am the base class constructor.."<<endl;
		}
		
		base1(int x) {
			cout<<"the base class as value of X:"<<x<<endl;
		}
};

class derived : public base1 {
	public:
		
		derived() {
			cout<<"I am the derived class constructor.."<<endl;
		}
		
		derived(int x,int y) {
			cout<<"the derived class value of Y:"<<y<<endl;
		}
};
class derived2 : public derived {
	public:
		derived2() {
			cout<<"I am the derived2 class constructor.."<<endl; 
		}
		
		derived2(int x,int y,int z) {
			//derived d1(x,y);
			cout<<"the derived2 class of value of Z:"<<z<<endl;
		}
};

int main(){
	derived2 d3(14,16,18);
	
	return 0;
}
