// reverse a number entered
#include<stdio.h>
int main ()
{
	int n,r;
	printf("enter number a:");
	scanf("%d",&n);
	
	while(n>0){
		r=n%10;
		printf("%d",&r);
		n=n/10;
	}
	return 0;
}