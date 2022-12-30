#include <stdio.h>

/*********************************
 * Example print format specifiers
 ********************************/
int main() 
{
   char c = 'a';
   int i = 9999;
   float f = 3.1415926535897932;

   printf("c = %d (%o in octal)\n", c, c);
   printf("i = %6d (%x in hex)\n", i, i);
   printf("f = %8.5f (%e in sci. notation)\n", f, f);

   return 0;
}
