/* C program to accept a grade and declare the equivalent description */
#include<stdio.h>
void main()
{  // Declaring the variables
  char student_grade;
  
  // Taking the inputs
  printf("Enter student_grade :");
  scanf("%c", &student_grade);
  
  // Printing the results
  
  if(student_grade == 'A')
  { printf("Average");
  }
  
  else if(student_grade == 'E')
  { printf("Excellent");
  }
  
  else if(student_grade == 'F')
  { printf("Fail");
  }
  
  else if(student_grade == 'G')
  { printf("Good");
  }
  
  else if(student_grade == 'V')
  { printf("Very Good");
  }
}
