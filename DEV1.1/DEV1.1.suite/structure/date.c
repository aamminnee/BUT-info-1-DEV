#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
  time_t secondes = time(NULL);
  struct tm *temps_local = localtime(&secondes);
  printf("%04d-%d-%d\n", temps_local->tm_year + 1900, temps_local->tm_mon + 1, temps_local->tm_mday);  
  return EXIT_SUCCESS;
}
