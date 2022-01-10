//what is constructor..
//constructor is a special type function..
//it has name as a class of the object 
// it has no return type value of the constructor...
//there are three type of constructor ..



//this is the paramaterized constructor .....
//value given in complile time and find the sum of a and b;
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
		
};							

int main()
{
	stu a1(10,20);
	
	return 0;
	
}
