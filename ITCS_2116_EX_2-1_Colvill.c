#include <stdio.h>

int main() 
{
  //Declare
  char a,b,c,d;

  //Ask for Input
  printf("Enter Four Letters: \n");

  //Recieve and Set Variables
  scanf("%c",&a);
  scanf("%c",&b);
  scanf("%c",&c);
  scanf("%c",&d);

  //Print in Reverse Order
  printf("%c%c%c%c",d,c,b,a);

  return 0;
}
