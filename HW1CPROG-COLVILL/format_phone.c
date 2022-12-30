#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a, b, c;
  printf("Enter a phone number in the following format (xxx) xxx-xxxx :\n");
  scanf("(%i) %i-%i", &a, &b, &c);
  printf("%i.%i.%i \n", a, b, c);
  if(a == 704){
    printf("This is a Charlotte number.");
  }
  else{
    printf("This is not a Charlotte number.");
  }
  }