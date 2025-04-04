#include<stdio.h>

#define RED           1
#define GREEN         2
#define BLUE          4

int hue(void) {
  int choice = rand()%3;
  if (choice == 0) {
    return RED;
  } else if (choice == 1) {
    return GREEN;
  } else /* if (choice == 2) */ {
    return BLUE;
  }
}