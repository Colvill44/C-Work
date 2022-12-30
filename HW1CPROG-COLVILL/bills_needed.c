#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a;
  int twenty;
  int ten;
  int five;
  int one;
  
  printf("Enter a dollar amount: ");
  scanf("%i", &a);
  printf("You entered %i \n", a);

  twenty = a / 20;
  a -= (20 * twenty);
  ten = a / 10;
  a -= (10 * ten);
  five = a / 5;
  a -= (5 * five);
  one = a / 1;

  printf("Breakdown: \n");
  printf("Twenties: %i \n", twenty);
  printf("Tens: %i \n", ten);
  printf("Fives: %i \n", five);
  printf("Ones: %i \n", one);
  }