/* premier programme */#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
  int n = 1431655765;
  int i = 32;
  for(; i > 0; i--){
    printf("%d", (n>>i)&1);
   }
   printf("%d", n&1);
   printf("\n");
  return EXIT_SUCCESS;
}


