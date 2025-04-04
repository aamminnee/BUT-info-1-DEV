#include<stdio.h>
#include<stdlib.h>

int grandeur(int entier) {
    if (entier < 10) {
        return 1;
    } else {
        return 1 + grandeur(entier / 10);
    }
}

int main(void) {
    printf("%d\n", grandeur(0));
    printf("%d\n", grandeur(999));
    printf("%d\n", grandeur(10000));
    return EXIT_SUCCESS;
} 