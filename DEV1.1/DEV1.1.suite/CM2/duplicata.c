#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char**argv) {
	FILE *flux1 = NULL, *flux2 = NULL;
	char buffer1, buffer2;
	int identique = 1;
	flux1 = fopen(argv[argc - 2], "r");
	flux2 = fopen(argv[argc - 1], "r");
	if (flux1 == NULL || flux2 == NULL) {
		perror("erreur d'ouverture");
		exit(EXIT_FAILURE);
	}
	while (!(feof(flux1))) {
	    fread(&buffer1, sizeof(char), 1, flux1);
	    fread(&buffer2, sizeof(char), 1, flux2);
	    if (ferror(flux1) || ferror(flux2)) {
	        perror("erreur de lecture");
	        fclose(flux1);
	        fclose(flux2);
	        exit(EXIT_FAILURE);
	    }
	   	identique = (buffer1 == buffer2) ? 1 : 0;
	   	if (identique == 0) {
	   		printf("fichiers non identique.\n");
	   		fclose(flux1);
	        fclose(flux2);
	   		return EXIT_SUCCESS;
	   	}
	}
	printf("fichiers identique.\n");
	fclose(flux1);
	fclose(flux2);
	return EXIT_SUCCESS;
}