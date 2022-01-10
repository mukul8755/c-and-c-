#include<stdio.h>
#include<conio.h>
int main()
{
	int i,count=0;
	for(i=300;i<=500;i++) {
		if(i%4==0) {
			//if(i%2==0) {
			count++;
		//	}
		}
	}
	printf("divided by 7 %d is times",count);
	return 0;
}
