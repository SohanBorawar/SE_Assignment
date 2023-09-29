#include<stdio.h>
int main()
{
	int n;
	int n1,n2,ans;
	printf("Welcome To Calculator World\n");
	printf("1.ADDITION\n");
	printf("2.SUBTRACTION\n");
	printf("3.MULTIPLICATION\n");
	printf("4.DIVISION\n");
	printf("5.SQUARE\n");
	printf("6.SQUARE ROOT\n");
	printf("7.EXIT \n");	
	printf("Enter your Choice :");
	scanf("%d",&n);
	/**********************************************/
	switch (n)  
    {  
        case 1:  
            // Add two numbers  
            printf (" You chose: Addition");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            ans = n1 + n2; // Add two numbers  
            printf (" Addition of two numbers is: %.2f",ans);  
            break;
        case 2:  
            // Subtract two numbers  
            printf (" You chose: Subtraction");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            ans = n1 - n2; // subtract two numbers  
            printf (" Subtraction of two numbers is: %.2f",ans);  
            break; 
              
        case 3:  
            // Multiplication of the numbers  
            printf (" You chose: Multiplication");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            ans = n1 * n2; // multiply two numbers  
            printf (" Multiplication of two numbers is: %.2f",ans);  
            break;
              
        case 4:  
            // Division of the numbers  
            printf (" You chose: Division");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
            printf (" Enter Second Number: ");  
            scanf (" %d", &n2);  
            if (n2 == 0)  
                {  
                    printf (" \n Divisor cannot be zero. Please enter another value ");  
                    scanf ("%d", &n2);        
                }  
            ans = n1 / n2; // divide two numbers  
            printf (" Division of two numbers is: %.2f", ans);  
            break; // break the function  
              
        case 5:  
            // getting square of a number  
            printf (" You chose: Square");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
  
            ans = n1 * n1; // get square of a number  
            printf (" Square of %d number is: %.2f", n1, ans);  
            break; // break the function  
              
        case 6:  
            // getting the square root of the number  
            printf (" You chose: Square Root");  
            printf ("\n Enter First Number: ");  
            scanf (" %d", &n1);  
              
            ans= sqrt(n1);   
            printf (" Square Root of %d numbers is: %.2f", n1,ans);  
            break; // break the function  
              
        case 7:  
            printf (" You chose: Exit");  
            exit(0);   
            break; // break the function  
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
           
}