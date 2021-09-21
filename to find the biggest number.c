/* C program to find the biggest number of two given numbers */
#include<stdio.h>
void main()
{  // Declaring the variables
    int number1, number2;
   // Taking inputs
    printf("Enter two numbers:\n");
    scanf("%d %d", &number1, &number2);
    
    // Printing the results
    
    if(number1>number2)
	{ printf("number1 is the biggest");
	}
	
	else if(number2>number1)
	{ printf("number2 is the biggest");
	}
	
	else
	{ printf("Both are equal");
	}
}
