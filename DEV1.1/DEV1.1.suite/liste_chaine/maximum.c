#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct elt {
    unsigned short int valeur;
    struct elt *suivant;
} elt;

unsigned short int determine_elt() {
    return (rand() % 889) + 111;
}

elt* initialiser_chaine(unsigned short int valeur) {
    elt* element = malloc(sizeof(elt));
    if (element == NULL) {
        perror("Échec de l'allocation mémoire");
        exit(EXIT_FAILURE);
    }
    element->valeur = valeur;
    element->suivant = NULL;
    return element;
}

elt* ajout_element_chaine(elt* element) {
    elt *p, *nouveau_element;
    unsigned short int valeur = determine_elt();
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

elt* initialiser_liste(elt* liste, int nb_elt) {
    int i;
    for (i = 0; i < nb_elt; i++) {
        liste = ajout_element_chaine(liste);
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
        printf("%hu", p->valeur);
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

void modifier_liste(elt* liste, int indice, unsigned short int valeur) {
    elt* p = liste;
    int i = 0;
    while (p != NULL) {
        p->valeur = (i == indice) ? valeur : p->valeur;
        p = p->suivant;
        i++;
    }
}

void rotate_liste(elt* liste, int decalage, int longueur) {
    elt* p;
    elt* tete;
    elt* last;
    int i;

    if (liste == NULL || longueur <= 1) return;

    decalage = decalage % longueur;
    if (decalage == 0) return;

    p = liste;
    for (i = 1; i < longueur - decalage; i++) {
        p = p->suivant;
    }

    tete = p->suivant;
    p->suivant = NULL;

    last = tete;
    while (last->suivant != NULL) {
        last = last->suivant;
    }

    last->suivant = liste;
    liste = tete;
}


int main(void) {
    elt* p = NULL;
    srand(time(NULL));
    p = initialiser_liste(p, 10);
    afficher_liste(p);
    modifier_liste(p, 3, 12);
    afficher_liste(p);
    rotate_liste(p, 3, 10);
    afficher_liste(p);
    return EXIT_SUCCESS;
}
