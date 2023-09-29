#include<stdio.h>
/*WAP to convert years into days and days into years*/

int main()
{
	int selc,years,days;
	printf("here you can convert years in days :1, days in years :2\n");
	printf("enter your required input :");
	scanf("%d",&selc);
	
if (selc == 1){
	printf(">>>>>>>>>>>>years in days<<<<<<<<<<<< \n");
	printf("enter years :");
	scanf("%d",&years);
	days = years*365;
	printf("days:%d",days);
}
else if (selc == 2){	
	printf(">>>>>>>>>>>>days in years<<<<<<<<<<<< \n");
	printf("enter days :");
	scanf("%d",&days);
	years = days/365;
	printf("years :%d",years);
}
else {
	printf("invalid input");
}

}