#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
  int des_1, des_2, des_3, combinaison = 0, reponse, nb_combinaison = 0;
  float rep;
  for(des_1 = 1; des_1 <= 6; des_1++) {
    for(des_2 = 1; des_2 <= 6; des_2++) {
      for(des_3 = 1; des_3 <= 6; des_3++) {
        nb_combinaison++;
        if ((des_1 + des_2 + des_3) >= 15) {
          combinaison++;
        }
      }
    }
  }
  rep = (((float)combinaison) / ((float)nb_combinaison));
  printf("la probabilité d'obtenir le titre de PALADIN est de %f. \n", rep);
  return EXIT_SUCCESS;
}
