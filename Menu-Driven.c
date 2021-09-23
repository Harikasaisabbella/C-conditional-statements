/* Menu-Driven program for a simple calculation */
#include<stdio.h>
void main()
{  // Declaring the variables
   float num1, num2, opt;
   
   // Taking inputs
   printf("Enter first number :");
   scanf("%f", &num1);
   printf("Enter second number :");
   scanf("%f", &num2);
   printf("Enter your option");
   printf("\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-ModuloDivision\n");
   scanf("%f", &opt);
   
   // Printing the results
   
   if(opt == 1)
   { printf("%.f+%.f = %.f", num1, num2, num1+num2);
   }
   
   else if(opt == 2)
   { printf("%.f-%.f = %.f", num1, num2, num1-num2);
   }
   
   else if(opt == 3)
   { printf("%.f*%.f = %.f", num1, num2, num1*num2);
   }
   
   else if(opt == 4)
   { printf("%.f/%.f = %.2f", num1, num2, num1/num2);
   }
   
   else
   { printf("%.f %c %.f = %.f", num1, '%',  num2, num1/num2);
   }
}
