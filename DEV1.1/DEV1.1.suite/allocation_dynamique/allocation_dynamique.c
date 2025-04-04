#include <stdio.h>
#include <stdlib.h>

void append_double(double **tableau, int *longueur, double elt) {
    double *temp;
    (*longueur)++;
    temp = realloc(*tableau, (*longueur) * sizeof(double));
    if (temp == NULL) {
        perror("Erreur de réallocation");
        exit(EXIT_FAILURE);
    }
    *tableau = temp;
    (*tableau)[*longueur - 1] = elt;
}

int singleton(double tableau[], int longueur, double elt) {
    int i;
    for (i = 0; i < longueur; i++) {
        if (tableau[i] == elt) {
            return 0;
        }
    }
    return 1;
}

void affiche_liste(double tab[], int longueur) {
    int i;
    for (i = 0; i < longueur; i++) {
        printf("%f, ", tab[i]);
    }
    printf("\n");
}

void character(char variable) {
    printf("appuye sur 'q' pour quitter sinon n'importe qu'elle touche: ");
    scanf("%c", &variable);
    printf("%c", variable);
}

int main(void) {
    int len_temp = 0, i = 0;
    double *tab = NULL, element;
    char interact = 0;
    
    character(interact);
    printf("%c", interact);

    while (interact != 'q') {

        printf("Entrer l'élément n°%d : ", i);
        scanf("%lf", &element);

        if (singleton(tab, len_temp, element)) {
            append_double(&tab, &len_temp, element);
            i++;
        }
        character(interact);
    }

    affiche_liste(tab, len_temp);
    free(tab);

    return EXIT_SUCCESS;
}
