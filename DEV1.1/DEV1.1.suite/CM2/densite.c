#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "nul.h"

int main(int argc, char** argv) {
	double *liste = NULL;
	double valeur;
	char* erreur;
	int i,ln = 1, nulles;
	liste = malloc(1 *sizeof(double));
	valeur = strtod(argv[1], &erreur);
	liste[0] = valeur;
	for (i = 2; i < argc; i++) {
		valeur = strtod(argv[i], &erreur);
		ln++;
		liste = (double*) realloc(liste, ln * (sizeof(double)));
		liste[ln - 1] = valeur;
	}
	nulles = nul(liste, ln);
	printf("%d éléments nulles.\n", nulles);
	free(liste);
	return EXIT_SUCCESS;
}

