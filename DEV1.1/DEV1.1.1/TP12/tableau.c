#include <stdio.h>
#include <stdlib.h>

int main(void) {
  signed int tab[2][5], tab2[3][5], tab3[5][5], i, j, valeur = 15;
  printf("+-----+-----+-----+-----+-----+\n");
  for(i = 0; i < 2; i++) {
    for(j = 1; j <= 5; j++) {
      tab[i][j] = j;
      printf("| %3d ", tab[i][j]);
    }
    printf("|\n+-----+-----+-----+-----+-----+\n");
  }
  printf("\n");
  printf("+-----+-----+-----+-----+-----+\n");
  for(i = 0; i < 3; i++) {
    for(j = 1; j <= 5; j++) {
      tab[i][j] = j + (i * 5);
      printf("| %3d ", tab[i][j]);
    }
    printf("|\n+-----+-----+-----+-----+-----+\n");
  }
  printf("\n");
  printf("+-----+-----+-----+-----+-----+\n");
  for(i = 0; i < 5; i++) {
    for(j = 1; j <= 5; j++) {
      tab[i][j] = (i >= j) ? j : 0;
      printf("| %3d ", tab[i][j]);
    }
    printf("|\n+-----+-----+-----+-----+-----+\n");
  }
  printf("\n");
  printf("+-----+-----+-----+-----+-----+\n");
  for(i = 0; i < 2; i++) {
    for(j = 5; j > 00; j--) {
      tab[i][j] = j;
      printf("| %3d ", tab[i][j]);
    }
    printf("|\n+-----+-----+-----+-----+-----+\n");
  }
  printf("\n");
  printf("+-----+-----+-----+-----+-----+\n");
  for(i = 0; i < 3; i++) {
    for(j = 1; j <= 5; j++) {
      tab2[i][j] = valeur;
      valeur--;
      printf("| %3d ", tab2[i][j]);
    }
    printf("|\n+-----+-----+-----+-----+-----+\n");
  }
  printf("\n");
  printf("+-----+-----+-----+-----+-----+\n");
  for(i = 0; i < 5; i++) {
    for(j = 1; j <= 5; j++) {
      tab3[i][j] = (i >= j) ? 0 : j - 1;
      printf("| %3d ", tab3[i][j]);
    }
    printf("|\n+-----+-----+-----+-----+-----+\n");
  }
  return EXIT_SUCCESS;
}

