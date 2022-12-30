#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char a, b;
  printf("Enter any one number and then press enter: \n");
  scanf(" %c", &a);
  printf("Enter any one number and then press enter: \n");
  scanf(" %c", &b);
  char c[3] = {a, b};
  int d = atoi(c);
  printf("%i \n", d);
  int e;
  printf("Enter two numbers and then press enter: \n");
  scanf(" %i", &e);
  int f, g;
  f = e / 10;
  g = e % 10;
  char h, i, j;
  h = (char) (f + '0');
  i = (char) (g + '0');
  printf("%c%c \n", h, i);
  
  return 0;
  }