/* C program to check whether a character is an alphabet,digit or specialcharacter */
#include<stdio.h>
void main()
{ // Declaring the variables
  char ch;
  
  // Taking inputs
  printf("Enter a character :");
  scanf("%c", &ch);
  
  // Printing the results
  if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  { printf("Alphabet");
  }
  
  else if(ch >= '0' && ch <= '9')
  { printf("Digit");
  }
  
  else 
  { printf("Special character");
  }
}
