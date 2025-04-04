#include<stdio.h>
#include<stdlib.h>


int main(void) {
  int rep, rep_temp;
  int i = 2;
  printf("entrer un entier naturel non nul: \n");
  scanf("%d", &rep);
  rep_temp = rep;
  printf("%d = ", rep);
  while(rep_temp !=  1) {
    if ((rep_temp % i) == 0) {
      rep_temp = rep_temp / i;
      printf(" %d *", i);
    } else {
      i++;
    }
  }
  printf("\b \n");
  return EXIT_SUCCESS;
}

