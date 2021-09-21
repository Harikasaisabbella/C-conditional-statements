#include<stdio.h>
void main()
{  int n;
   printf("Enter n number:\n");
   scanf("%d", &n);
   
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
