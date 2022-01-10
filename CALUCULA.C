#include<stdio.h>
#include<conio.h>
void main()
{
float num1,num2,a;
char op;
clrscr();
printf("enter the value of num1 and operation,num2 : ");
scanf("%f%c%f",&num1,&op,&num2);
switch(op)
{
case '+':
a=num1+num2;
printf("sum= %.3f",a);
break;
case '-':
a=num1-num2;
printf("substract = %.3f",a);
break;
case '*':
a=num1*num2;
printf("multiply = %.3f",a);
break;
case '/':
a=num1/num2;
printf("divide = %.3f",a);
break;
default :
printf("operation is not found");
}
getch();
}
