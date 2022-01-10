// wap to input a number and find the count the  digit...
#include<iostream>
using namespace std;
int main()
{
    int no,b,rev = 0,cpy;
    cout<<"enter the number:";
    cin>>no;
    cpy = no;
  while(no!=0)
    {
      b=no%10;
      rev = rev*10+b;
      no=no/10;
    
    }
    if(cpy == rev) {
    	cout<<"the number is polindrome."<<endl;
	}
	else {
		cout<<"the number is not polindrome"<<endl;
	}
    return 0;
}
