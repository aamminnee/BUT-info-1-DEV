#include<stdio.h>
#include<stdlib.h>

int main(void) {
  float res;
  int i = 0;
  for (i; i <5; i++) {
    float rep;
    printf("entrer un reels R \n");
    scanf("%f", &rep);
    res += rep;
  }
  printf("le résultat est %.2f \n", res);
}
