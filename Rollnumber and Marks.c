/* C program to claculate the total, percentage, division */
#include<stdio.h>
void main()
{ // Declaring the variables
  int rollno, phy, che, cs, total;
  float percentage;
  
  // Taking inputs
  printf("Enter the roll number :");
  scanf("%d", &rollno);
  
  printf("Enter the marks of physics, chemistry, computerscience :");
  scanf("%d%d%d", &phy, &che, &cs);
  
  // Calculation
  total = phy+che+cs;
  percentage = total/3.0;
  
  // Printing the results
  if(percentage >= 80)
  { printf("Division: First");
  }
  
  else if(percentage >= 70 && percentage <=79)
  { printf("Division: Second");
  }
  
  else if(percentage >= 60 && percentage <= 69)
  { printf("Division: Third");
  }
  
  else if(percentage >= 50 && percentage <= 59)
  { printf("Division: Fourth");
  }
  
  else
  { printf("Fail");
  }
  
  printf("\nroll number : %d", rollno);
  printf("\nmarks in physics : %d\nmarks in chemistry : %d\nmarks in computerscience : %d\n", phy, che, cs);
  printf("total marks = %d\npercentage = %.2f\n", total, percentage);
}
