/* C program to calculate and print electricity bill */
#include<stdio.h>
void main()

  // Declaring the variables
{ int cus_id, units;
  double amount, net_amount, surcharge=0.0;
  
  // Taking inputs
  printf("Enter customer id and no.of units\n");
  scanf("%d%d", &cus_id, &units);
  
  if(units<=199)
  { 
    amount = units * 1.20;
  }
  
  else if(units>=200 && units<400)
  { 
    amount = units * 1.50;
  }
  
  else if(units>=400 && units<600)
  {
    amount = units * 1.80;
  }
  
  else
  {
    amount = units * 2.00; 
  }
  
  if(amount>400)
  { 
    surcharge = 15*amount/100;
  }
  
  net_amount = amount + surcharge;  
  // Printing the results
  printf("Customer Id: %d\n", cus_id);
  printf("Units Consumed: %d\n", units);
  printf("Amount Charges: %.2lf\n", amount);
  printf("Surcharge Amount: %.2lf\n", surcharge);
  printf("Net Amount Paid By The Customer: %.2lf\n", net_amount);
}
