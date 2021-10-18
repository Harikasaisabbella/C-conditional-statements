#include<stdio.h>
void main()
{ float physics, chemistry, computerscience, rollnumber, totalmarks, percentage;
  printf("Enter your rollnumber:");
  scanf("%f", &rollnumber);
  printf("Enter the marks of physics, chemistry, computerscience:");
  scanf("%f%f%f", &physics, &chemistry, &computerscience);
  totalmarks = physics+chemistry+computerscience;
  percentage = totalmarks/3;
  
  if(percentage >= 80)
  { printf("Division = First");
  }
  
  else if(percentage > 70 && percentage < 79)
  { printf("Division = Second");
  }
  
  else if(percentage > 60 && percentage < 69)
  { printf("Division = Third");
  }
  
  else if(percentage > 50 && percentage < 59)
  { printf("Division = Fourth");
  }
  
  else if(percentage <= 49)
  { printf("Division = Fail");
  }
  printf("\nRoll Number : %.0f\n", rollnumber);
  printf("Marks in Physics : %.0f\nMarks in Chemistry : %.0f\nMarks in Computer Science : %.0f\n\n", physics, chemistry, computerscience);
  printf("Total Marks: %.0f\n", totalmarks);
  printf("Percentage: %.2f", percentage);
}
