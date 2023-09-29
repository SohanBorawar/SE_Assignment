#include<stdio.h>
/*WAP to check if the given year is a leap year or not.*/
int main ()
{
	int year;
	printf("Enter year :");
	scanf("%d",&year);
	year = year%400;
	if (year == 0){
		printf("it is a leap year");
	}
	else{
		printf("it is not a leap year");
		}
}