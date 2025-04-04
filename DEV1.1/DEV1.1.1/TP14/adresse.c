#include <stdio.h>
#include <stdlib.h>

int main(void) {
  long int n = 4614256;
  printf("res: %f \n", *(double*) &n);
  return EXIT_SUCCESS;
}
