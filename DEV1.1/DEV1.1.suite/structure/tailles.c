#include<stdio.h>
#include<stdlib.h>

typedef struct enregistrement {
    char champs_1;
    int champs_2;
    char champs_3;
} enregistrement;

int main(void) {
    enregistrement audio;
    printf("%d\n", sizeof audio);
    return EXIT_SUCCESS;
}