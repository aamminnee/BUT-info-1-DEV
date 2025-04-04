#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
  int  a = 1;
  signed int b = 11;
  char c = 111;
  short int d = 1111;
 
  printf("%e\n", a);
  printf("%7o\n", b);
  printf("%c\n", c);
  printf("%2hd\n", d);
  return EXIT_SUCCESS;
}
