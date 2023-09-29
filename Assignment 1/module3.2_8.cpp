// number = 654321 >> max number is = 6
#include<stdio.h>
main()
{
	int a,i,r,max;
	printf("enter a number :");
	scanf("%d",&a);
	while(a>0){
		r = a%10;
		if(r>=max){
			max = r;
			a=a/10;	
		}
		else{
			continue;
		}
		printf("Max :%d",max);
	}
}