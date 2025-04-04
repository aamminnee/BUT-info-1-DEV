#include<stdio.h>
#include<stdlib.h>

typedef struct Elt {
    double valeur;
    struct Elt* suivant;
} elt;

void affiche_liste_chaine(elt* p) {
    if (p != NULL) { 
        printf("{ ");
        while (p != NULL) {
            printf("%.2f", p->valeur);
            p = p->suivant;
            if (p != NULL) {
                printf(", ");
            }
        }
        printf(" }\n");
    } else {
        printf("NULL!\n");
    }
}

elt* ajout_elt(double value, elt* p) {
    elt* nouveau = (elt*)malloc(sizeof(elt));
    elt* current = p;
    if (nouveau == NULL) {
        return NULL;
    }
    nouveau->valeur = value;
    nouveau->suivant = NULL;

    if (p == NULL || p->valeur >= value) {
        nouveau->suivant = p;
        return nouveau;
    }

    
    while (current->suivant != NULL && current->suivant->valeur < value) {
        current = current->suivant;
    }

    nouveau->suivant = current->suivant;
    current->suivant = nouveau;

    return p;
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
    elt* p = NULL;
    p = ajout_elt(13.4, p);
    affiche_liste_chaine(p);
    p = ajout_elt(12.5, p);
    affiche_liste_chaine(p);
    p = ajout_elt(89.0, p);
    affiche_liste_chaine(p);
    p = ajout_elt(1.2, p);
    affiche_liste_chaine(p);
    liberer_liste(p);
    return EXIT_SUCCESS;
}
