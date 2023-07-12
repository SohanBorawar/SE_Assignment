#include<stdio.h>
/*Display This Information using printf 
#1. Your Name 
#2. Your Birth date
#3. Your Age ss
#4. Your Address*/sss
int main()
{
	char name[50],address[100];
	int birthdate,age;
	printf("enter your name :");
	scanf("%s",name);
	printf("enter your birth date :");
	scanf("%d",&birthdate);
	printf("enter your age :");
	scanf("%d",&age);
	printf("enter your address :");
	scanf("%s",address);
	
	printf("\n name :%s",name);
	printf("\n birth date :%d",birthdate);
	printf("\n age :%d",age);
	printf("\n name :%s",address);
}