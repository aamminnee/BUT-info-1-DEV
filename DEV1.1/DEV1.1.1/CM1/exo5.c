#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
  int labyrinthe[10][10] = {{0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
                            {1, 1, 1, 1 ,0, 0, 1, 1, 1, 1},
                            {1, 1, 1, 1, 1, 0, 1, 1, 1, 1},
                            {1, 1, 1, 1, 0, 0, 1, 1, 1, 1},
                            {1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
                            {1, 0, 0, 0, 1, 1, 1, 1, 1, 1}, 
                            {1, 0, 1, 1 ,1, 1, 1, 1, 1, 1}, 
                            {1, 0, 0, 0, 0, 0, 1, 1, 1, 1},
                            {1, 1, 1, 1, 1, 0, 0, 0, 0, 1}, 
                            {1, 1, 1, 1, 1, 1, 1, 1, 0, 0}};
  int position_x = 0, position_y = 0, essai = 0;
  while((position_x != 9) || (position_y != 9)) {
    char rep;
    printf("Vers ou ? ");
    rep = getchar();
    if(rep == 'N') {
      essai++;
      if(position_y == 0 || labyrinthe[position_y - 1][position_x] != 0) {
        printf("Bloqué \n");
      } else {
        position_y--; 
        printf("Ok\n");
      }
    } else if(rep == 'S') {
      essai++;
      if(position_y == 9 || labyrinthe[position_y + 1][position_x] != 0) {
        printf("Bloqué \n"); 
      } else { 
        position_y++;
        printf("Ok\n");
      }
    } else if(rep == 'O') {
      essai++;
      if(position_x == 0 || labyrinthe[position_y][position_x - 1] != 0) {
        printf("Bloqué \n"); 
      } else { 
        position_x--;
        printf("Ok\n");
      }
    } else if(rep == 'E') {
      essai++;
      if(position_x == 9 || labyrinthe[position_y][position_x + 1] != 0) {
        printf("Bloqué \n"); 
      } else { 
        position_x++;
        printf("Ok\n");
      }
    }
  }
  printf("Vous êtes sorti au bout de %d tours. \n", essai);
  return EXIT_SUCCESS;
}

