#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j, occurence[9] = {0}, tab[3][3], res = 0;
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      printf("entrer un nombre (compris entre 1 et 9):  ");
      scanf("%d", &tab[i][j]);
      if (tab[i][j] > 9 || tab[i][j] < 1) {
        printf("le carré magique ne respecte pas les règles. \n");
        return EXIT_SUCCESS;
      } else {
        if (occurence[tab[i][j]] >= 1) {
          printf("le carré magique n'est pas magique. 1\n");
          return EXIT_SUCCESS;
        } else {
          occurence[tab[i][j]] += 1;
        }
      }
      printf("\n");
    }
  }

  res = tab[0][0] + tab[0][1] + tab[0][2];
  for(i = 0; i < 3; i++) {
    int res1 = 0, res2 = 0;
    for(j = 0; j < 3; j++) {
      res1 += tab[i][j];
      res2 += tab[j][i];
    }
    if (res1 != res || res2 != res) {
      printf("le carré magique n'est pas magique. 2\n");
      return EXIT_SUCCESS;
    }
  }

  if (tab[0][0] + tab[1][1] + tab[2][2] != res || res != tab[0][2] + tab[1][1] + tab[2][0]) {
    printf("le carré magique n'est pas magique. 4\n");
    return EXIT_SUCCESS;
  }

  printf("le carré est magique. \n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      printf("%3d", tab[i][j]);
    }
    printf("\n");
  }
  return EXIT_SUCCESS;
}

