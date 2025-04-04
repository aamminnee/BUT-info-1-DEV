#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  float temp, vitesse_avion, vitesse_vent, distance;
  printf("vitesse de l'avion: ");
  scanf("%f", &vitesse_avion);
  printf("\n");
  printf("vitesse du vent: ");
  scanf("%f", &vitesse_vent);
  printf("\n");
  printf("distance du parcour: ");
  scanf("%f", &distance);
  printf("\n");
  temp = distance / (vitesse_avion + vitesse_vent);
  printf("le voyage durera %.2f heure(s) \n", temp);
  return EXIT_SUCCESS;
}


