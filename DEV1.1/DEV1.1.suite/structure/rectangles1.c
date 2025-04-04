#include <stdio.h>
#include <stdlib.h>
#include <graph.h>

typedef struct Rect {
    int cord_x;
    int cord_y;
    int longueur;
    int hauteur;
} Rect;


int main(void) {
    char i;
    couleur noir;
    InitialiserGraphique();
    CreerFenetre(0, 0, 1080, 720);
    noir = CouleurParComposante(0, 0, 0);

    while (1) {

        if (SourisCliquee()) {
            Rect rectangle_temp = {_X, _Y, 50, 30};
            RemplirRectangle(rectangle_temp.cord_x, rectangle_temp.cord_y, 50, 30);
        }
    }
    FermerGraphique();
    return EXIT_SUCCESS;
}
