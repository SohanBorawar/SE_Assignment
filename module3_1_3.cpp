#include<stdio.h>
int main()
{  
	float selected,r,A,height,base,width,length;
	printf("1 : circle ,2 :triangle, 3 :rectangle \n");
	printf("what u want to find accord to that input 1 2 3:");
	scanf("%f",&selected);

if (selected == 1){
	printf("area of circle \n"); 
	
	printf("enter the radius of circle :");
	scanf("%f",&r);
	A = 3.14*r;
	printf("the area of circle %f",A);
}
else if (selected == 2){
	printf("area of triangle");
	printf("enter the height of triangle :");
	scanf("%f",&height);
	printf("enter the base of triangle :");
	scanf("%f",&base);
	A = height*base/2;
	printf("the area of triangle %f",A);
}

else if (selected == 3){
	printf("area of rectangle \n");
	printf("enter the width of rectangle :");
	scanf("%f",&width);
	printf("enter the length of rectangle :");
	scanf("%f",&length);
	A = length*width;
	printf("the area of rectangle %f",A);
}
else {
	printf("invalid input");
} 
	return 0;
}