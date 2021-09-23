/* C program to print weekdays */
#include<stdio.h>
void main()
{ // Declaring the variables
  int choice;
  // Taking inputs
  printf("Enter your choice(from 1-7)\n");
  scanf("%d", &choice);
  // Printing the results
  switch(choice)
  { 
     case 1:
     	printf("Monday\n");
     	break;
     case 2:
     	printf("Tuesday\n");
     	break;
     case 3:
     	printf("Wednesday\n");
     	break;
     case 4:
     	printf("Thursday\n");
     	break;
     case 5:
     	printf("Friday\n");
     	break;
     case 6:
     	printf("Saturday\n");
     	break;
     case 7:
     	printf("Sunday\n");
     	break;
     default:
     	printf("Invalid");
     	break;
  }
}
