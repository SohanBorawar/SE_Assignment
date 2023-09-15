// fibonaci series 011235
#include<stdio.h>
int main ()
{
	int num,a=0,b=1,i;
	printf("enter  num :");
	scanf("%d",&num);
	printf("%d",a);
	for(i=0;i<num;i++){
		printf("%d ",b);
		b = a+b;
		a=b;
	}

}