#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include "hue.h"

#define LIGHT         0
#define DARK          1
#define RED           1
#define GREEN         2
#define BLUE          4
#define LIGHT_RED   217
#define DARK_RED    124
#define LIGHT_GREEN 157
#define DARK_GREEN   34
#define LIGHT_BLUE  147
#define DARK_BLUE    19

int lightness(void) {
  if (time(NULL)%2) {
    return LIGHT;
  } else {
    return DARK;
  }
}

int main(void) {
  int l, c, v;

  srand(time(NULL));
  l = lightness();
  c = hue();

  if (c == RED) {
    v = (l == LIGHT) ? LIGHT_RED : DARK_RED;
  } else if (c == GREEN) {
    v = (l == LIGHT) ? LIGHT_GREEN : DARK_GREEN;
  } else /* if (c == BLUE) */ {
    v = (l == LIGHT) ? LIGHT_BLUE : DARK_BLUE;
  }

  printf("┏━━━━┓\n");
  printf("┃\33[48;5;%dm    \33[m┃\n", v);
  printf("┃\33[48;5;%dm    \33[m┃\n", v);
  printf("┗━━━━┛\n");

  return EXIT_SUCCESS;
}