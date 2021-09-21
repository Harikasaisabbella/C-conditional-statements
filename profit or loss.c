#include<stdio.h>
void main()
{  int cp, sp;
   printf("Enter the cost price\n");
   scanf("%d", &cp);
   printf("Enter the selling price\n");
   scanf("%d", &sp);
   
   if(sp > cp)
   { printf("profit is %d\n", (sp - cp));
   }
   
   else if(cp > sp)
   { printf("loss is %d\n", (cp - sp));
   }
}
