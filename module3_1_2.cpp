#include<stdio.h>
/*Write a program to make Simple calculator (to make addition, subtraction, 
multiplication, division and modulo)*/

int main()
{
	int selc,a,b,Ans;
	printf("welcome to simple calculator ");
	printf("here you can perform Addition:1, Subtraction:2, multiplicaation:3, division:4, modulo:5 input according to you ");
	printf("enter your required input :");
	scanf("%d",&selc);
	
if (selc == 1){
	printf(">>>>>>>>>>>>Addition<<<<<<<<<<<< \n");
	printf("enter numbeer A :");
	scanf("%d",&a);
	printf("enter number B :");
	scanf("%d",&b);
	Ans = a+b;
	printf("Addition :%d",Ans);
}
else if (selc == 2){	
	printf(">>>>>>>>>>>>Subtraction<<<<<<<<<<<< \n");
	printf("enter numbeer A :");
	scanf("%d",&a);
	printf("enter number B :");
	scanf("%d",&b);
	Ans = a-b;
	printf("Subtraction :%d",Ans);
}
else if (selc == 3){
	printf(">>>>>>>>>>>>Multiplication<<<<<<<<<<<< \n");
	printf("enter numbeer A :");
	scanf("%d",&a);
	printf("enter number B :");
	scanf("%d",&b);
	Ans = a*b;
	printf("Multiplication :%d",Ans);
}
else if (selc == 4){
	printf(">>>>>>>>>>>>Division<<<<<<<<<<<< \n");
	printf("enter numbeer A :");
	scanf("%d",&a);
	printf("enter number B :");
	scanf("%d",&b);
	Ans = a/b;
	printf("Division :%d",Ans);
}
else if (selc == 5){
	printf(">>>>>>>>>>>>Modulo<<<<<<<<<<<< \n");
	printf("enter numbeer A :");
	scanf("%d",&a);
	printf("enter number B :");
	scanf("%d",&b);
	Ans = a%b;
	printf("Modulo :%d",Ans);
}
else {
	printf("invalid input");
}


}