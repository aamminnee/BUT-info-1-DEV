#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
  int i, lancer_des_1, lancer_des_2; 
  printf("entrer le premier dé : ");
  scanf("%d", &lancer_des_1);
  printf("entrer le second dé : ");
  scanf("%d", &lancer_des_2);
  if (lancer_des_1 == lancer_des_2) {
    if (lancer_des_1 == 1) {
      printf("Snakes eyes \n");
    } else if (lancer_des_2 == 6) {
      printf("boxcars\n");
    } else {
      printf("hard ways\n");
    }
  }
  return EXIT_SUCCESS;
}
