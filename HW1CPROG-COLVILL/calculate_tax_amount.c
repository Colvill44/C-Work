#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int income;
  float tax;
  int dependents;
  int credit;
  
  printf("Enter your income: ");
  scanf("%i", &income);
  
  if(income <= 9275){
    tax = income * .12;
    printf("Tax: $%.2f \n", tax);
  }
  else if (income <= 37650){
    tax = income * .17;
    printf("Tax: $%.2f \n", tax);
  }
  else if (income <= 91150){
    tax = income * .27;
    printf("Tax: $%.2f \n", tax);
  }
  else if (income <= 190150){
    tax = income * .30;
    printf("Tax: $%.2f \n", tax);
  }
  else if (income > 190150){
    tax = income * .35;
    printf("Tax: $%.2f \n", tax);
  }

  printf("Enter number of Dependents: ");
  scanf("%i", &dependents);

  if(dependents == 0){
    credit = dependents * 450;
    printf("Tax Credit: $%i \n", credit);
    printf("Adjusted Tax: $%.2f \n", tax - credit);
  }
  else if(dependents == 1){
    credit = dependents * 450;
    printf("Tax Credit: $%i \n", credit);
    printf("Adjusted Tax: $%.2f \n", tax - credit);
  }
  else if(dependents == 2){
    credit = dependents * 450;
    printf("Tax Credit: $%i \n", credit);
    printf("Adjusted Tax: $%.2f \n", tax - credit);
  }
  else if(dependents == 3){
    credit = dependents * 450;
    printf("Tax Credit: $%i \n", credit);
    printf("Adjusted Tax: $%.2f \n", tax - credit);
  }
  else if(dependents == 4){
    credit = dependents * 450;
    printf("Tax Credit: $%i \n", credit);
    printf("Adjusted Tax: $%.2f \n", tax - credit);
  }
  else if(dependents >= 5){
    credit = 5 * 450;
    printf("Tax Credit: $%i \n", credit);
    printf("Adjusted Tax: $%.2f \n", tax - credit);
  }

  
}