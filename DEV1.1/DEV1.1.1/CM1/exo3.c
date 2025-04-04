#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
  int i;
  char rep, voyelle[7] = {'a', 'e', 'i', 'o', 'u', 'y'}, alphabet;
  printf("Entrez un caractère : ");
  scanf("%c", &rep);
  for(alphabet = 'a'; alphabet <= 'z'; alphabet++) {
    if (alphabet == rep) {
      for(i = 0; i < 7; i++) {
        if (rep == voyelle[i]) {
          printf("voyelle \n");
          return EXIT_SUCCESS;
        }
      }
      printf("minuscule \n");
      return EXIT_SUCCESS;
    }
  }
  printf("autre \n");
  return EXIT_SUCCESS;
}
