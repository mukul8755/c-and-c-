#include<iostream>
using namespace std;
class complex 
{
	int real, imag;
	public:
	complex () { }
		complex() {
			real =3;
			imag = 4;
		}
		complex(int r,int i) {
			real = r;
			imag = i;
		} 
		friend void  sum(complex c1,complex c2);
		void display();
		
};

void complex :: display() {
	cout<<real<<"+"<<imag<< "i"<<endl;
}

void sum(complex c1 , complex c2) {
	complex c3;
	c3.real = c1.real+c2.real;
	c3.imag = c1.imag+c2.imag;	  
	
}


int main() {
	complex obj ,obj1(2,5),obj3;
	obj3 = sum(obj,obj1);
	obj1.display();
	
	return 0;
	
}
