
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float produit = 5.49;
  float rendu = 0.0f;
  float clients;
  printf("le client a payé : \n");
  scanf("%f", &clients);
  clients -= produit;
  while(clients > 0.01f) {
    if (clients >= 2.0f) {
      clients -= 2.0f;
      printf("2 \n");
    } else if (clients >= 0.2f) {
      clients -= 0.2f;
      printf("0.2 \n");
    } else {
      clients -= 0.1f;
      printf("0.1 \n");
    }
  }
  return EXIT_SUCCESS;
}

