#include<stdio.h>
void main()
{   int number1, number2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &number1, &number2);
    
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
