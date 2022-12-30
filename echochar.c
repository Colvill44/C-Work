#include <stdio.h>

int main(void) {
  int c;
  c = getchar();
  while (c != EOF) {
    (void)putchar(c);
    c = getchar();
  }
  putchar('\n');

  return 0;
}