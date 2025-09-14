#include<stdio.h>

int nul(double liste[], int taille) {
	int i, nul = 0;
	for (i = 0; i < taille; i++) {
		nul = (liste[i] < 0.1 && liste[i] > -0.1) ? nul + 1 : nul;
	}
	return nul;
}