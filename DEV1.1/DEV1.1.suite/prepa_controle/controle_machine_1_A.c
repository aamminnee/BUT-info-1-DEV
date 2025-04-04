#include<stdio.h>
#include<stdlib.h>

/*
int main(int argc, char **argv) {
    long int num = strtol(argv[argc - 2], NULL, 0), denom = strtol(argv[argc - 1], NULL, 0);
    ldiv_t diviseur = ldiv(num, denom);
    printf("quotient : %ld \nreste : %ld\n", diviseur.quot, diviseur.rem);
    return EXIT_SUCCESS;
}
*/

/*
void append_int(int **liste, int *longueur, int valeur) {
    (*longueur)++;
    *liste = realloc(*liste, (*longueur) * sizeof(int));
    if (*liste == NULL) {
        perror("Erreur de réallocation");
        exit(EXIT_FAILURE);
    }
    (*liste)[*longueur - 1] = valeur;
}

int *determine_liste(int valeur, int *longueur) {
    int *liste = malloc(sizeof(int));
    if (liste == NULL) {
        perror("Erreur d'allocation mémoire");
        exit(EXIT_FAILURE);
    }
    liste[0] = valeur;
    *longueur = 1;
    while (valeur % 2 == 0) {
        valeur /= 2;
        append_int(&liste, longueur, valeur);
    }
    return liste;
}

void dessine_tab(int tableau[], int taille) {
    int i;
    for (i = 0; i < taille; i++) {
        printf("+-----");
    }
    printf("+\n|");
    for (i = 0; i < taille; i++) {
        printf("%4d |", tableau[i]);
    }
    printf("\n");
    for (i = 0; i < taille; i++) {
        printf("+-----");
    }
    printf("+\n");
}

int main(void) {
    int *liste = NULL;
    int longueur = 0, valeur;

    printf("Quelle valeur doit contenir le premier élément de la liste : ");
    if (scanf("%d", &valeur) != 1) {
        fprintf(stderr, "Erreur de saisie.\n");
        return EXIT_FAILURE;
    }

    liste = determine_liste(valeur, &longueur);
    dessine_tab(liste, longueur);

    free(liste);
    return EXIT_SUCCESS;
}
*/

int main(void) {
    FILE* flux;
    char buffer[4], buffer2[4];
    int i, j;

    flux = fopen("reitne", "r");
    if (flux == NULL) {
        perror("Erreur d'ouverture du fichier");
        return EXIT_FAILURE;
    }

    if (fread(buffer, sizeof(int), 1, flux) != 1) {
        perror("Erreur de lecture");
        fclose(flux);
        return EXIT_FAILURE;
    }

    j = 3;
    for (i = 0; i < 4; i++) {
        buffer2[i] = buffer[j];
        j--;
    }
    printf("%d\n", *(int*)buffer2);

    fclose(flux);
    return EXIT_SUCCESS;
}
