#include<stdio.h>
#include<stdlib.h>

typedef struct String {
    char caractere;
    struct elt *suivant;
} string;

char tableau_to_liste(char *tab) {
    if (tab == "" || tab == NULL) {
        string *c = NULL;
        c->caractere = tab[0];
        int i = 1;
        while(tab[i] =! '\0') {
            c = c->suivant; 
            c->caractere = tab[i];
            i++;
        }
    }
}

void afficher_liste(string* liste) {
    string* p;
    p = liste;
    if (liste == NULL) {
        printf("NULL\n");
        return;
    }
    printf("{ ");
    while (p != NULL) {
        printf("%c", p->caractere);
        if (p->suivant != NULL) {
            printf(", ");
        }
        p = p->suivant;
    }
    printf(" }\n");
}

char append_char(char *tab, char caractere) {
    char *rep = NULL;
    int len = 0, i = 0;
    while(tab[i] == '\0') {
        i++;
    }
    len += i + 1;
    rep = malloc(len * sizeof(char));
    if (rep == NULL) {
        perror("Échec de l'allocation mémoire");
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < len )
}

char liste_to_tableau(string* c) {
    char *tab;
    while(tab == '\0') {

    }
}