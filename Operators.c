#include<stdio.h>
void main()
{
	int a, b, choice1, choice2;
	printf("Enter two numbers\n");
	scanf("%d%d", &a, &b);
	printf("Enter\n1. Arithmetic\n2. Relational\n3. Bitwise\n");
	scanf("%d", &choice1);
	
	switch(choice1)
	{
		case 1:
			printf("Enter\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo Division\n");
			scanf("%d", &choice2);
			switch(choice2)
			{
				case 1:
					printf("%d + %d = %d", a, b, a+b);
					break;
				case 2:
					printf("%d - %d = %d", a, b, a-b);
					break;
				case 3:
					printf("%d * %d = %d", a, b, a*b);
					break;
				case 4:
					printf("%d / %d = %.2lf", a, b, a*1.0/b);
					break;
				case 5:
					printf("%d %% %d = %d", a, b, a%b);
					break;
				default:
					printf("Invalid Input\n");
					break;
			}
			 break;
		case 2:
			printf("Enter\n1. Greater than\n2. Less than\n3. Not equals\n4. Equals\n");
			scanf("%d", &choice2);
			switch(choice2)
			{
				case 1:
					printf("%d > %d is ", a, b);
				if(a > b)
				{
					printf("True");
				}
				else
				{
					printf("False");
				}
				    break;
				case 2:
					printf("%d < %d is ", a, b);
				if(a < b)
				{
					printf("True");
				}
				else
				{
					printf("False");
				}
				    break;
				case 3:
					printf("%d != %d is ", a, b);
				if(a != b)
				{
					printf("True");
				}
				else
				{
					printf("False");
				}
				    break;
				case 4:
					printf("%d == %d is ", a, b);
				if(a == b)
				{
					printf("True");
				}
				else
				{
					printf("False");
				}
				    break;
			    default:
			    	printf("Invalid Input\n");
			    	break;
	    	}
			break;
	    case 3:
	    	printf("Enter\n1. Bitwise AND\n2. Bitwise OR\n3. BitwiseXOR\n");
	    	scanf("%d", &choice2);
	    	switch(choice2)
	    	{
	    		case 1:
	    			printf("%d & %d = %d", a, b, a&b);
	    			break;
	    		case 2:
	    			printf("%d | %d = %d", a, b, a|b);
	    			break;
	    		case 3:
	    			printf("%d ^ %d = %d", a, b, a^b);
	    			break;
	    		default:
	    			printf("Invalid Input");
	    			break;
	    		}
	    		default:
	    			printf("Invalid Input");
	    			break;
			   		}	
}
