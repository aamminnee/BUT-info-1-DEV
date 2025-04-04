#include<stdio.h>
#include<stdlib.h>

/*
2)
int main(void) {
    printf("%c \n", '6' + 1);
    return EXIT_SUCCESS;
}

3)
int main(void) {
    char a = 'c';
    printf("%c\n", (a&0xdf)|0x20);
    printf("%c\n",a + 'A' - 'a');
    return EXIT_SUCCESS;
}


4) unicode utilise plus d'octets que latin 1
î ne fait pas partie de latin 1
int main(void) {
  printf("%c\n", 'î');
  return EXIT_SUCCESS;
}
*/

int main(void) {
  char rien_1;
  char rien_2;
  char rien_3;
  char annee_1;
  char annee_2;
  char mois_1;
  char mois_2;
  printf("entrer votre numéro de sécurité sociale : \n");
  rien_1 = getchar(); 
  rien_2  = getchar();
  annee_1 = getchar();
  annee_2 = getchar();
  rien_3 = getchar();
  mois_1 = getchar();
  mois_2 = getchar();
  printf("votre date de naissance : %c%c/%c%c \n", mois_1, mois_2, annee_1, annee_2);
  return EXIT_SUCCESS;
}

