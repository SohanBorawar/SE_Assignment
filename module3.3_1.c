// find max number from array
#include<stdio.h>
main()
{
	int a[9] = {1,2,3,4,5,16,9,7,8};
	int i,max=0,n;
	for(i=0;i<9;i++){
		n = a[i];
		if(n>=max){
			max = a[i];
		}
	}
	printf("max :%d",max);
}