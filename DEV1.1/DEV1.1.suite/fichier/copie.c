#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {
    FILE *flux1 = NULL, *flux2 = NULL;
    char caratere;
    flux1 = fopen(argv[argc - 2], "r");
    flux2 = fopen(argv[argc - 1], "w");
    if (flux1 == NULL ||flux2 == NULL) {
        perror("erreur d'ouverture des fichiers.");
        if (flux1 != NULL) {
            fclose(flux1);
        } else if (flux2 != NULL) {
            fclose(flux2);
        }
        exit(EXIT_FAILURE);
    }
    while(!(feof(flux1))) {
        fread(&caratere, sizeof(char), 1, flux1);
        if(ferror(flux1)) {
            perror("erreur de lecture du fichier.");
            exit(EXIT_FAILURE);
        }
        fwrite(&caratere, sizeof(char), 1, flux2);
    }
    return EXIT_SUCCESS;
}