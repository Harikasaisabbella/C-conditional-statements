/* C program to read any digit and display it in the words */
#include<stdio.h>
void main()
{ // Declaring the variables
  int number;
  
  // Taking inputs
  printf("Enter number from (1-9)");
  scanf("%d", &number);
  
  // Printing the results
  
  if(number == 1)
  { printf("One");
  }
  
  else if(number == 2)
  { printf("Two");
  }
  
  else if(number == 3)
  { printf("Three");
  }
  
  else if(number == 4)
  { printf("Four");
  }
  
  else if(number == 5)
  { printf("Five");
  }
  
  else if(number == 6)
  { printf("Six");
  }
  
  else if(number == 7)
  { printf("Seven");
  }
  
  else if(number == 8)
  { printf("Eight");
  }
  
  else if(number == 9)
  { printf("Nine");
  }
}
