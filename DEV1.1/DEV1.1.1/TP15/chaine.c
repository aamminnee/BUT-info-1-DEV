#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
  char mdp[27] = "mdp", rep[27];
  printf("entrer un mot de passe: ");
  fgets(rep, 27, stdin);
  (strcmp(mdp, rep) == 0) ? printf("l'authentification à réussi \n") : printf("le mot de passe n'est pas valide \n");
  return EXIT_SUCCESS;
}
