#include<stdio.h>
main()
{
	int i,n,even_sum = 0,odd_sum = 0;
	printf("Enter a Number N :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%2 == 0){
			even_sum = even_sum + i ;
		}
		else{
			odd_sum = odd_sum + i ;
		}
		
	}
	printf("Sum of Even Number Is %d",even_sum);
	printf("Sum of Odd Number Is %d",odd_sum);
	
}