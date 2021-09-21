/* C program to find the largest of three numbers */
#include<stdio.h>
void main()
{ // Declaring the variables
  int num1, num2, num3;
  
  // Taking inputs
  printf("Enter number1, number2, number3\n");
  scanf("%d%d%d", &num1, &num2, &num3);
  
  // Printing the results
  if(num1 >= num2 && num1 >= num3)
  { printf("%d is the largest number", num1);
  }
  
  else if(num2 >= num1 && num2 >= num3)
  { printf("%d is the largest number", num2);
  }
  
  else
  { printf("%d is the largest number", num3);
  }
}
