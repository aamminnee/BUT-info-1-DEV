#include <stdio.h>
#include <stdlib.h>

typedef struct Podium {
    int score;
    char pseudo[4];
} podium;

int main(void) {
    FILE* flux = fopen("top10", "r");
    podium hall_of_ame[10];
    int i;
    if (flux == NULL) {
        perror("erreur d'ouverture de fichier.\n");
        return EXIT_FAILURE;
    }
    for(i = 0; i < 10; i++) {
        fread(&hall_of_ame[i].score, sizeof(int), 1, flux);
        fread(&hall_of_ame[i].pseudo, sizeof(char), 3, flux);
        printf("%d  %s\n", hall_of_ame[i].score, hall_of_ame[i].pseudo);
    }
    fclose(flux);
    return EXIT_SUCCESS;
}
