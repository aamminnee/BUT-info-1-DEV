#include<stdio.h>
#include<stdlib.h>

int main(void) {
  int i, occurence[6] = {0}, max = 0, rep;
  for(i = 0; i < 5; i++) {
    printf("jets n'%d: ", (i + 1));
    scanf("%d", &rep);
    if (6 >= rep >= 1) {
      occurence[rep - 1]++;
      printf("rep: %d / occurence: %d \n", rep, occurence[rep - 1]);
    } else {
      i--;
    }
  }
  for(i = 0; i < 6; i++) {
    max = (max < occurence[i]) ? occurence[i] : max;
  }
  printf("occurrence max %d \n", max);
  return EXIT_SUCCESS;
}
