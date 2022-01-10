//what is constructor..
//constructor is a special type function..
//it has name as a class of the object 
// it has no return type value of the constructor...
//there are three type of constructor ..


//this the paramatized constructor ...
#include<iostream>
using namespace std;
class stu {
	public:
	int a,b,sum;	
	stu(int n1,int n2) 
	{
		a=n1;
		b=n2;
		sum =a+b;
		cout<<"the value of a is = "<<a<<endl;
		cout<<"the value of b is = "<<b<<endl;
		cout<<"the sum of a and b is = "<<sum<<endl;
	}
	
	stu() {				//this is the default constructor...
				
	}
		
};		

int main()
{
	int s,q;
	cout<<"enter the  value of a:"<<endl;
	cin>>s;
	cout<<"enter the value of b:"<<endl;
	cin>>q;
	stu a1(s,q);
	
	
	//this program run by the paramaterized constructor...
	stu a2;
	
	return 0;
	
}
