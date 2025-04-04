#include <stdio.h>
#include <stdlib.h>

typedef struct Podium {
    int score;
    char pseudo[4];
} podium;

int main(int argc, char **argv) {
    FILE* flux = fopen("top10", "ra");
    podium hall_of_ame[10];
    podium argument = {argv[argc - 2], argv[argc - 1]};
    char argument_a_placer_si_necessaire = 1;
    int i;
    if (flux == NULL) {
        perror("erreur d'ouverture de fichier.\n");
        return EXIT_FAILURE;
    }
    for(i = 0; i < 10; i++) {
        fread(&hall_of_ame[i].score, sizeof(int), 1, flux);
        fread(&hall_of_ame[i].pseudo, sizeof(char), 3, flux);
        if ((hall_of_ame[i].score < argument.score) && argument_a_placer_si_necessaire) {
            argument_a_placer_si_necessaire = 0;
            fseek(flux, ftell(flux) - 7, SEEK_SET);
            fwrite(&hall_of_ame[i].score, sizeof(int), 1, flux);
            fwrite(&hall_of_ame[i].pseudo, sizeof(char), 3, flux);
        }
        printf("%d  %s\n", hall_of_ame[i].score, hall_of_ame[i].pseudo);
    }
    fclose(flux);
    return EXIT_SUCCESS;
}
