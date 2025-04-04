#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int rep;
    int max = 0;
    while(rep != -1) {
	printf("enter un entier: \n");
	scanf("%d", &rep);
    	max = (rep >= max) ? rep : max;
    }
    printf("%d \n", max);
    return EXIT_SUCCESS;
}
