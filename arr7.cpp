//wap to use the array and print the number in acending order...
#include<iostream>
using namespace std;
int main()
{
    int i,j,num[5],larg=0;
    
    cout<<"enter the number:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>num[i];
    }
    for(i=0;i<5;i++)
	{
	    if(larg<num[i])
		{
			larg=num[i];	
		}
		 
	}
    cout<<"largest element in the array = :"<<larg<<endl;
return 0;
}