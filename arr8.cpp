//wap to use the array and print the number in acending order...
#include<iostream>
using namespace std;
int main()
{
    int i,j,num[5],small;
    
    cout<<"enter the number:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>num[i];
    }
    small = num[0];
    for(i=0;i<5;i++)
	{
	    if(small>num[i])
		{
			small=num[i];	
		}
		 
	}
    cout<<"smallest element in the array = :"<<small<<endl;
return 0;
}