/* C program to read temperature in centigrade and display temperature state */
#include<stdio.h>
void main()
{  // Declaring the variables
  int temperature;
  
  // Taking inputs
  printf("Enter temperature in centigrade\n");
  scanf("%d", &temperature);
  
  // Printing the results
  
  if(temperature<0)
  { printf("freezing weather");
  }
  
  else if(temperature<10)
  { printf("very cold weather");
  }
  
  else if(temperature<20)
  { printf("cold weather");
  }
  
  else if(temperature<30)
  { printf("normal temperature");
  }
  
  else if(temperature<40)
  { printf("hot");
  }
  
  else if(temperature>=40)
  { printf("very hot");
  }
}
