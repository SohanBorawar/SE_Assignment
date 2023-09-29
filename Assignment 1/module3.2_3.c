#include<stdio.h>
int main ()
{
	int a;
	printf("enter number a:");
	scanf("%d",&a);
	
	if (a%2==0){
		printf("is prime number");
	}
	else {
		printf("is not prime");
	}
}