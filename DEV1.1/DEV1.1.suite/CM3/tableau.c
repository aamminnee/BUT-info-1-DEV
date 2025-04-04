#include<stdio.h>
#include<stdlib.h>

void affiche_lite_reel(int indice, char **caracteres, int longueur) {
    if (indice == longueur) {
        printf("\n");    
    } else {
        double reel = strtod(caracteres[indice], NULL); 
        printf("%.2f, ", reel);
        affiche_lite_reel(indice + 1, caracteres, longueur);
    }

}

void determine_max(int indice, char **caracteres, int longueur, int max) {
    if (indice == longueur) {
        printf("%d \n", max);   
    } else {
        int entier = (int)strtol(caracteres[indice], NULL, 10); 
        max = (entier > max) ? entier : max;
        determine_max(indice + 1, caracteres, longueur, max);
    }

}

typedef struct chiffre {
    int valeur;
    struct chiffre* suivant;
} chiffre;


int main(int argc, char **argv) {
    FILE* flux = NULL;
    char buffer[21] = "j'aime les pokemon !";
    char *contenufile = NULL;
    int i;
    long int len;
    flux = fopen(argv[1], "r+");
    if (flux == NULL) {
        perror("erreur d'ouverture du fichier.");
        exit(EXIT_FAILURE);
    }
    fseek(flux, 0, SEEK_END);
    len = ftell(flux);
    contenufile = malloc((len + 1) * sizeof(char));
    fseek(flux, 0, SEEK_SET);
    fread(contenufile, sizeof(char), len, flux);
    fseek(flux, 0, SEEK_SET);
    for(i = 0; buffer[i] != '\0'; i++) {
        fwrite(&buffer[i], sizeof(char), 1, flux);
    }
    fwrite(contenufile, sizeof(char), len, flux);
    fclose(flux);
    return EXIT_SUCCESS;
}