#include <stdio.h>
#include <stdlib.h>

int main()
  { 
  char ch1, ch2;
  float fl;
  int in;
  printf("Enter two chars, a space, a float, a space, and a decimal: \n");
  scanf("%c %c %f %d", &ch1, &ch2, &fl, &in);
  printf("%c%c\n%f\n%d", ch1, ch2, fl, in);
  return 0; 
  }