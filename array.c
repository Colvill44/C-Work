#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float array[5];
  float sum = 0;
  float average = 0;

  for(int i = 0; i < 5; i++){
    printf("Enter number here: ");
    scanf("%f", &array[i]);
  }

  for(int i = 0; i < 5; i++){
    sum += array[i];
  }
  average = sum / 5;

  printf("Sum: %f \n", sum);
  printf("Average: %f \n", average);
  }