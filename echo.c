#include <stdio.h>

/********************************
 * Example program to illustrate
 * console I/O and redirection
 *******************************/
int main (void)
{
   int c;
   
   c = getchar();
   
   while (c != ' ') {
      (void) putchar(c);
      c = getchar();
   }
   
   putchar('\n');

   return 0;
}
