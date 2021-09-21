/* C program to check whether an alphabet is a vowel or consonant */
#include<stdio.h>
void main()
{  // Declaring the variables
   char ch;
   
   // Taking inputs
   printf("Enter an alphabet\n");
   scanf("%c", &ch);
   
   // Printing the results
   if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
   { printf("Vowel");
   }
   
   else 
   { printf("Consonant");
   }
}
