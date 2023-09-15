// swap two number without using third variable 
#include <stdio.h>

int main(void) {
  int a,b;
  printf("Enter number a :");
  scanf("%d",&a);
  printf("Enter number b :");
  scanf("%d",&b);
  a = a+b;
  b = a-b;
  a = a-b;
  printf("The value of A :%d",a);
  printf("\nThe value of B :%d",b);
  return 0;
}