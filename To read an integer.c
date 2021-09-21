/* C program to read an integer */
#include<stdio.h>
void main()
{  // Declaring the variables
   int n;
   
   // Taking inputs
   printf("Enter n number:\n");
   scanf("%d", &n);
   
   // Printing the results
   
   if(n == 0)
   { printf("0");
   }
   
   else if(n < 0)
   { printf("-1");
   }
   
   else
   { printf("1");
   }
}
