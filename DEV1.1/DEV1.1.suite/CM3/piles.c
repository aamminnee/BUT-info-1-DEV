#include<stdio.h>
#include<stdlib.h>
#include"piles.h"

int est_vide(Pile* pile) {
    return pile == NULL;
}

void empiler(Pile* pile, char elt) {
    if (!est_vide) { 
        Pile* p = NULL;
        p = (Pile*)malloc(sizeof(Pile));
        p->caractere = elt, p->suivant = pile;
    } else {
        pile = (Pile*)malloc(sizeof(Pile));
        pile->caractere = elt, pile->suivant = NULL;
    }
}

char depiler(Pile* pile) {
    char valeur;
    Pile* q = NULL;
    q = (Pile*)malloc(sizeof(Pile));
    q = pile;
    pile = pile->suivant;
    return q->caractere;
}
