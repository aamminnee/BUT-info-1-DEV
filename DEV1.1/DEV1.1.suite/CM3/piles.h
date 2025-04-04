#ifndef PILES_H
#define PILES_H


typedef struct Pile {
    char caractere;
    struct Pile* suivant;
} Pile;

int est_vide(Pile* pile);
void empiler(Pile* pile, char elt);
char depiler(Pile* pile);


#endif /* PILES_H */