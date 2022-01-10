//wap to use the array and print the number in acending order...
#include<iostream>
using namespace std;
int main()
{
    int i,j,num[5],temp=0;
    
    cout<<"enter the number:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>num[i];
    }
    for(i=0;i<5;i++)
	{
		 for(j=i+1;j<=4;j++)
		 {
			if(num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		 }
	}
    cout<<"array in decending order:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<num[i]<<endl;

	}
return 0;
}