// number = 654321 >> summation of number
#include<stdio.h>
main()
{
	int a,i,r,sum=0;
	printf("enter a number :");
	scanf("%d",&a);
	while(a>0){
		r = a%10;
		sum = sum + r;
		a=a/10;	
	}
	printf("Sum :%d",sum);
}