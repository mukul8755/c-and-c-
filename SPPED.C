#include<stdio.h>
#include<conio.h>
void main()
{
int s,d,t,t1,d1,s1,choice,ans;
clrscr();
printf("what are you find :\n ");
printf("\n 1. distance");
printf(" \n 2. time");
printf("\n 3. speed");
printf("\n enter your choice: ");
scanf("%d",&choice);
switch(choice)
{

	case 1:
	printf("\n enter the time: ");
	scanf("%d",&t);
	printf("\n enter the speed : ");
	scanf("%d",&s);
		d=s*t;
	printf("\n distance =  %d",d);
	break;

	       case 2:
		printf("\n enter the distance:");
		scanf("%d",&d);
		printf("\n enter the speed:");
		scanf("%d",&s1);
			s=d/s1;
		printf("\n time  =  %d",s);
		break;
		case 3:
			printf("\n enter the distance;");
			scanf("%d",&d);
			printf("\n enter the speed:");f
			scanf("%d",&t1);

				t=d/t1;
			printf("\n speed %d",t);
		break;
	}
getch();
}