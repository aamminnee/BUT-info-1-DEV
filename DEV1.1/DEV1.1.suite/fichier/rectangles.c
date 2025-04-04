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

int main(void) {
    FILE* flux;
    char i, run = 1;
    int longueur, longueur2;
    Rect* liste_rectangle, *liste_rectangle_2;
    InitialiserGraphique();
    CreerFenetre(0, 0, 1080, 720);
    flux = NULL, liste_rectangle = NULL, liste_rectangle_2 = NULL, longueur = 0, longueur2 = 0;
    flux = fopen("sauvegarde", "a+");
    if (flux == NULL) {
        perror("erreur d'ouverture de fichier.");
        exit(EXIT_FAILURE);
    }
    while(!(feof(flux))) {
        Rect futur_rect;
        fread(&futur_rect.cord_x, sizeof(int), 1, flux);
        if (ferror(flux)) {
            perror("erreur de lecture de fichier.");
            exit(EXIT_FAILURE);
        }
        fread(&futur_rect.cord_y, sizeof(int), 1, flux);
        if (ferror(flux)) {
            perror("erreur de lecture de fichier.");
            exit(EXIT_FAILURE);
        }
        fread(&futur_rect.longueur, sizeof(int), 1, flux);
        if (ferror(flux)) {
            perror("erreur de lecture de fichier.");
            exit(EXIT_FAILURE);
        }
        fread(&futur_rect.hauteur, sizeof(int), 1, flux);
        if (ferror(flux)) {
            perror("erreur de lecture de fichier.");
            exit(EXIT_FAILURE);
        }
        append_rect(liste_rectangle, futur_rect, &longueur);
    }
    while (run) {
        if (SourisCliquee()) {
            Rect rectangle_temp = {_X, _Y, 50, 30};
            append_rect(liste_rectangle_2, rectangle_temp, &longueur2);
        }
        for (i = 0; i < longueur2; i++) {
            RemplirRectangle(liste_rectangle_2[i].cord_x, liste_rectangle_2[i].cord_y, liste_rectangle_2[i].longueur, liste_rectangle_2[i].hauteur);
        }
        for (i = 0; i < longueur; i++) {
            RemplirRectangle(liste_rectangle[i].cord_x, liste_rectangle[i].cord_y, liste_rectangle[i].longueur, liste_rectangle[i].hauteur);
        }
    }
    for (i = 0; i < longueur2; i++) {
        fwrite(&liste_rectangle_2[i].cord_x, sizeof(int), 1, flux);
        fwrite(&liste_rectangle_2[i].cord_y, sizeof(int), 1, flux);
        fwrite(&liste_rectangle_2[i].longueur, sizeof(int), 1, flux);
        fwrite(&liste_rectangle_2[i].hauteur, sizeof(int), 1, flux);
    }
    fclose(flux);
    free(liste_rectangle);
    FermerGraphique();
    return EXIT_SUCCESS;
}
