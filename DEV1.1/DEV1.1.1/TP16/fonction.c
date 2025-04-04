#include<stdio.h>
#include<stdlib.h>

void inverse_var(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {
  int var1 = 5, var2 = 10;
  printf("avant : A: %d | B: %d \n", var1, var2);
  inverse_var(&var1, &var2);
  printf("après : A: %d | b: %d \n", var1, var2);
  return EXIT_SUCCESS;
}
