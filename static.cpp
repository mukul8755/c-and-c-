#include <iostream> 
#include<conio.h> 
using namespace std;
class static_type { 
	static int i;    //static data member 
	public: 
		static void ini(int x)  //static member function
		{
			i=x;
		}
		void show()				  
		{
			cout<<i<<endl;
		}
}; 
int static_type :: i;    // static data member definition 

int main(){ 
	static_type::ini(100);  //Accessing static function 
	static_type x; 
	x.show();  
return 0; 
} 
