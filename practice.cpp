// number = 654321 >> reverse = 123456
#include<stdio.h>
main()
{
	int a,i,r;
	printf("enter a number :");
	scanf("%d",&a);
	while(a>0){
		r=a%10;
		printf("%d",r);
		a=a/10;
	}
}