/* C program to check whether an alphabet is vowel or consonant */
#include<stdio.h>
void main()
{  // Declaring the variables
   char choice;
    // Taking inputs
   printf("Enter a character\n");
   scanf("%c", &choice);
   // Printing the results
   switch(choice)
   {
   	  case 'a':
   	  	printf("Vowel");
   	  	break;
   	  case 'e':
   	    printf("Vowel");
   	    break;
   	  case 'i':
   	  	printf("Vowel");
   	  	break;
   	  case 'o':
   	  	printf("Vowel");
   	  	break;
   	  case 'u':
   	  	printf("Vowel");
   	  	break;
   	  default:
   	  	printf("Consonant");
   	  	break;
   }
}
