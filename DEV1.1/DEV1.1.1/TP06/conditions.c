#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int annee;
    printf("entrer une année \n");
    scanf("%d", &annee);
    ((annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0) ? printf("%d est une année bissextile. \n", annee) : printf("%d n'est pas une année bissextile. \n", annee);
    return EXIT_SUCCESS;
}
