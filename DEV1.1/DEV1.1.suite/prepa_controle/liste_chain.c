#include <stdio.h>
#include <stdlib.h>

typedef struct elt {
    int valeur;
    struct elt *suivant;
} elt;

elt* initialiser_chaine(int valeur) {
    elt* element = malloc(sizeof(elt));
    if (element == NULL) {
        perror("Échec de l'allocation mémoire");
        exit(EXIT_FAILURE);
    }
    element->valeur = valeur;
    element->suivant = NULL;
    return element;
}

elt* ajout_element_chaine(elt* element, int valeur) {
    elt *p, *nouveau_element;
    nouveau_element = initialiser_chaine(valeur);
    if (element == NULL) {
        return nouveau_element;
    }
    p = element;
    while (p->suivant != NULL) {
        p = p->suivant;
    }
    p->suivant = nouveau_element;
    return element;
}

elt* initialiser_liste(elt* liste, int nb_elt, int liste_elt[]) {
    int i;
    for (i = 0; i < nb_elt; i++) {
        liste = ajout_element_chaine(liste, liste_elt[i]);
    }
    return liste;
}

void afficher_liste(elt* liste) {
    elt* p;
    p = liste;
    if (liste == NULL) {
        printf("NULL\n");
        return;
    }
    printf("{ ");
    while (p != NULL) {
        printf("%d", p->valeur);
        if (p->suivant != NULL) {
            printf(", ");
        }
        p = p->suivant;
    }
    printf(" }\n");
}

void liberer_liste(elt* liste) {
    elt *p, *precedent;
    p = liste;
    while (p != NULL) {
        precedent = p;
        p = p->suivant;
        free(precedent);
    }
}



int main(void) {
    elt *liste = NULL;
    int liste_valeur[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    liste = initialiser_liste(liste, 10, liste_valeur);
    afficher_liste(liste);
    liberer_liste(liste);
    return EXIT_SUCCESS;
}
