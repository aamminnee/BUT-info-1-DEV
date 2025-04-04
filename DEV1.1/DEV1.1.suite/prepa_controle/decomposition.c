#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char** argv) {
    double int_part, fract_part;
    fract_part = modf(strtod(argv[argc - 1], NULL), &int_part);
    printf("partie entiere : %f\npartie decimale : %f\n", int_part, fract_part);
    return EXIT_SUCCESS;
}