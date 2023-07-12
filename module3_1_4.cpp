#include<stdio.h>
int main()
{
	float totalamount,time,intrest,S_I;
	printf("enter the total amount :");
	scanf("%f",&totalamount);
	printf("enter the total time :");
	scanf("%f",&time);
	printf("enter the intrest :");
	scanf("%f",&intrest);
	S_I = totalamount*time*intrest/100;
	printf("the simple intrest is :%f",S_I);
}