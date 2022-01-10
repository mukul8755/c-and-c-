#include<stdio.h>
int main() {
	int m,e,h,p,c,avg,sum;
	printf("enter the mark of math:");
	scanf("%d",&m);
		printf("enter the mark of english:");
	scanf("%d",&e);
		printf("enter the mark of hindi:");
	scanf("%d",&h);
		printf("enter the mark of physics:");
	scanf("%d",&p);
	printf("enter the mark of chemistry:");
	scanf("%d",&c);
	sum = m+e+h+p+c;
	avg = (sum)/5;
	printf("\n sum of given marks: %d",sum);
	printf("\n average of given mark: %d",avg);
	if(avg<=100 && avg>=60) {
		printf("\n first division");
	}
	else if(avg<=60 && avg>=45) {
		printf("\n second division");
	}
	else if(avg<=45 && avg>=33) {
		printf("\n third division");
	}
	else {
		printf("\n fail");
	}
	return 0;
	
	
}
