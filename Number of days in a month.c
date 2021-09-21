/* C program to read any month number and display the number of days for this month */
#include<stdio.h>
void main()
{ // Declaring the variables
  int number;
  
  // Taking inputs
  printf("Enter number from (1-12):");
  scanf("%d", &number);
  
  // Printing the results
  
  if(number == 1)
  { printf("January has 31 days");
  }
  
  else if(number == 2)
  { printf("February has 28 days");
  }
  
  else if(number == 3)
  { printf("March has 31 days");
  }
  
  else if(number == 4)
  { printf("April has 30 days");
  }
  
  else if(number == 5)
  { printf("May has 31 days");
  }
  
  else if(number == 6)
  { printf("June has 30 days");
  }
  
  else if(number == 7)
  { printf("July has 31 days");
  }
  
  else if(number == 8)
  { printf("August has 31 days");
  }
  
  else if(number == 9)
  { printf("September has 30 days");
  }
  
  else if(number == 10)
  { printf("October has 31 days");
  }
  
  else if(number == 11)
  { printf("November has 30 days");
}
    
    else if(number == 12)
    { printf("December has 31 days");
	}
}
