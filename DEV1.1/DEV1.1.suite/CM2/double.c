#include<stdio.h>
#include<stdlib.h>

typedef struct Maillon {
	signed long valeur;
	struct Maillon *suivant;
} maillon;

maillon* initialiser_chaine(int valeur) {
    maillon* element = malloc(sizeof(elt));
    if (element == NULL) {
        perror("Échec de l'allocation mémoire");
        exit(EXIT_FAILURE);
    }
    element->valeur = valeur;
    element->suivant = NULL;
    return element;
}

maillon* ajout_element_chaine(maillon* element, int valeur) {
    maillon *p, *nouveau_element;
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

maillon* initialiser_liste(maillon* liste, int nb_elt, int liste_elt[]) {
    int i;
    for (i = 0; i < nb_elt; i++) {
        liste = ajout_element_chaine(liste, liste_elt[i]);
    }
    return liste;
}

void afficher_liste(maillon* liste) {
    maillon* p;
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

void liberer_liste(maillon* liste) {
    maillon *p, *precedent;
    p = liste;
    while (p != NULL) {
        precedent = p;
        p = p->suivant;
        free(precedent);
    }
}

maillon* copier_liste(maillon* liste, int longueur) {
	maillon* copie, p;
	if (liste == NULL) {
		return NULL;
	}
	p = liste
	copie = p;
	while(copie != NULL) {
		p = p->suivant;
		copie->suivant = p;

	}
	return copie;
}

 
int main(void) {
	maillon* liste = NULL;
	maillon* liste2 = copier_liste(liste)
	int taille = 3;
	liste = initialiser_liste(liste, taille, {1, 2, 3});
	afficher_liste(liste);
	liberer_liste(liste);
	return EXIT_SUCCESS;
}