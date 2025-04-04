#include <stdio.h>
#include <stdlib.h>
#include <graph.h>

typedef struct Rect {
    int cord_x;
    int cord_y;
    int longueur;
    int hauteur;
} Rect;

Rect* append_rect(Rect* liste, Rect rectangle, int* longueur) {
    Rect* temp = (Rect*) realloc(liste, (*longueur + 1) * sizeof(Rect));
    if (temp == NULL) {
        free(liste);
        exit(EXIT_FAILURE);
    }
    liste = temp;
    liste[*longueur] = rectangle;
    (*longueur)++;
    return liste;
}

int detection_bouton(Rect rectangle) {
    return (_X >= rectangle.cord_x && _X <= (rectangle.cord_x + rectangle.longueur) &&
            _Y >= rectangle.cord_y && _Y <= (rectangle.cord_y + rectangle.hauteur));
}

int main(void) {
    char i, touche_rectangle_existant;
    Rect* liste_rectangle = NULL;
    int longueur = 0;
    couleur blanc, noir;
    InitialiserGraphique();
    CreerFenetre(0, 0, 1080, 720);
    blanc = CouleurParComposante(255, 255, 255);
    noir = CouleurParComposante(0, 0, 0);

    while (1) {
        touche_rectangle_existant = 0;

        if (SourisCliquee()) {
            Rect rectangle_temp = {_X, _Y, 50, 30};
            for (i = 0; i < longueur; i++) {
                if (detection_bouton(liste_rectangle[i])) {
                    touche_rectangle_existant = 1;
                    liste_rectangle[i].longueur = 30;
                    liste_rectangle[i].hauteur = 50;
                    ChoisirCouleurDessin(blanc);
                    RemplirRectangle(liste_rectangle[i].cord_x, liste_rectangle[i].cord_y, 50, 30);
                    ChoisirCouleurDessin(noir);
                    RemplirRectangle(liste_rectangle[i].cord_x, liste_rectangle[i].cord_y, liste_rectangle[i].longueur, liste_rectangle[i].hauteur);
                }
            }
            if (!touche_rectangle_existant) {
                RemplirRectangle(_X, _Y, 50, 30);
                liste_rectangle = append_rect(liste_rectangle, rectangle_temp, &longueur);
            }
        }
    }

    free(liste_rectangle);
    FermerGraphique();

    return EXIT_SUCCESS;
}
