/* C program to calculate profit and loss */
#include<stdio.h>
void main()
{  // Declaring the variables
   int cp, sp;
   
   // Taking inputs
   printf("Enter the cost price\n");
   scanf("%d", &cp);
   printf("Enter the selling price\n");
   scanf("%d", &sp);
   
   // Printing the results
   
   if(sp > cp)
   { printf("profit is %d\n", (sp - cp));
   }
   
   else if(cp > sp)
   { printf("loss is %d\n", (cp - sp));
   }
}
