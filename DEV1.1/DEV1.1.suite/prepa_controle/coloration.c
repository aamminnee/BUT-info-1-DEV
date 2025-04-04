#include<stdio.h>
#include<stdlib.h>


int main(void) {
    FILE* flux = NULL;
    char buffer, valeur = '5', i, rien;
    flux = fopen("image.pgm", "r+");
    if (flux == NULL) {
        perror("erreur d'ouverture");
        exit(EXIT_FAILURE);
    }
    fseek(flux, 770, SEEK_SET);
    while (ftell(flux) <= 3585) {
        for (i = 0; i < 75; i++) { 
            fread(&buffer, sizeof(char), 1, flux);
            if (ferror(flux)) {
                perror("erreur de lecture");
                fclose(flux);
                exit(EXIT_FAILURE);
            }
            if (buffer == '3') {
                fseek(flux, -1, SEEK_CUR);
                fwrite(&valeur, sizeof(char), 1, flux);
            }
        }
        for (i = 0; i < 21; i++) { 
            fread(&rien, sizeof(char), 1, flux);
            if (ferror(flux)) {
                perror("erreur de lecture");
                fclose(flux);
                exit(EXIT_FAILURE);
            }
        }
    }
    fclose(flux);
    return EXIT_SUCCESS;
}
