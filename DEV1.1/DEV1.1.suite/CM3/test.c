#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "piles.h"


int main(void) {
    Pile* pile1 = NULL;
    char input[4];
    
    printf("La pile attend vos ordres \n > ");
    
    while (1) {
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        if (strcmp(input, "q") == 0) {
            break;
        }
        if (strlen(input) < 3) {
            printf("Entrée invalide. Veuillez entrer une commande correcte \n > ");
            continue;
        }
        if (input[0] == '+') {
            empiler(&pile1, input[1]);
            printf("%c a été ajouté à la pile \n > ", input[1]);
        } else if (input[0] == '-') {
            char elt = depiler(&pile1);
            printf("%c a été supprimé de la pile \n > ", elt);
        } else {
            printf("Commande invalide. Utilisez +<char>, - ou q pour quitter. \n > ");
        }
    }
    printf("Fin du programme.\n");
    return EXIT_SUCCESS;
}
