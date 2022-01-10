#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,res,choice;
clrscr();
printf("please enter two number : ");
scanf("%d%d",&a,&b);

printf("\n A  is b is added press 1:");
printf("\n A  is b is substract press 2:");
printf("\n A  is b is multiply  press 3:");
printf("\n A  is b is divide press 4:");
printf("\n A  is the square press 5");
printf("\n A  is the square press 6");
printf("\n A  is the cube press 7");
printf("\n A  is the square press 8");


printf("enter the choice : ");
scanf("%d",&choice);

switch(choice)
{
	case 1:'1';
	res=a+b;
	printf("\n sum = %d",res);

	case 2:'2';
	res=a-b;
	printf("\n substract = %d",res);

	case 3:'3';
	res=a*b;
	printf("\n multiply = %d",res);

	case 4:'4';
	res=a/b;
	printf("\n divide = %d",res);


	case 5:'5';
	res=a*a;
	printf("\n square of a  = %d",res);

	case 6:'6';
	res=b*b;
	printf("\n square of b  = %d",res);


	case 7:'7';
	res=a*a*a;
	printf("\n cube of a  = %d",res);


	case 8:'8';
	res=a*a*a;
	printf("\n cube of  = %d",res);

}
getch();
}
