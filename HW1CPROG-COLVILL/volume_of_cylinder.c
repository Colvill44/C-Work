#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float radius, height;
  printf("Enter radius: ");
  scanf("%f", &radius);
  printf("Enter height: ");
  scanf("%f", &height);
  printf("Volume: %f \n", 3.14159 * (radius * radius) * height);
}