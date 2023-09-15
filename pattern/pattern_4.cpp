// Alphabatic Pattern 
#include<stdio.h>
main()
{
	int row,col,space;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf(" *");
			
		}
		
		printf("\n");	
	}
	for(row=1;row<=10;row++)
	{
		for(col=4;col>=row;col--)
		{
			printf(" *");
			
		}
		
		printf("\n");	
	}

}