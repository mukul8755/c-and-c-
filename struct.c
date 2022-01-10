#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
struct student {
	//int roll;
	char name[100];
	long age;
}obj;
int main() {
	FILE *c;
	printf("enter the data of the student:");
	printf("\n enter the roll,name,age:");
	scanf("%s",obj.name);
	printf("\n enter the age of the student:");
	scanf("%ld",&obj.age);
	c=fopen("student.txt","w");
	fwrite(&obj,sizeof(obj),1,c);
	c=fopen("student.txt","r");
	while(fread(&obj,sizeof(obj),1,c)==1) {
		printf("%s",obj.name);
		printf("%ld",obj.age);	
	}
	return 0;
}
