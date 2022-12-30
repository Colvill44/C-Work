#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a;
  int b;
  int count = 0;
  int sum = 0;
  int div = 0;
  int divsum = 0;
  int divlow;
  int divhigh = 0;
  int divhighcheck = 0;
  int divlowcheck = 0;
  float average;
  
  printf("Enter first number: ");
  scanf("%i", &a);
  printf("Enter second number: ");
  scanf("%i", &b);

  while(a > b){
    printf("First number must be smaller than the second!\n");
    printf("Enter first number: ");
    scanf("%i", &a);
    printf("Enter second number: ");
    scanf("%i", &b);
  }

  for(int i = a; i <= b; i++){
    count++;
    sum += i;
    if((i % 5 == 0 && i % 6 != 0) || (i % 6 == 0 && i % 5 !=0)){
      divsum += i;
      div++;
      divhigh = i;
      divhighcheck = 1;
      if( divlowcheck == 0){
        divlow = i;
        divlowcheck++;
      }
    }
  }
  printf("Integer count in range: %i \n", count);
  printf("Integers div by 5 or 6 but not both: %i \n", div);
  printf("Sum of those divisible integers: %i \n", divsum);
  printf("Sum of all integers in range: %i \n", sum);
  if(divhighcheck == 0){
    printf("Highest divisible integer does not exist!");
  }
  else{
    printf("Highest divisible integer: %i \n", divhigh);
  }
  if(divlowcheck == 0){
    printf("Smallest divisible integer does not exist!");
  }
  else{
    printf("Smallest divisible integer: %i \n", divlow);
  }
  average = (a + b) / 2;
  printf("Average of two starting numbers: %.2f \n", average);
}