#include<stdio.h>
#include<stdlib.h>
#include<pwd.h>
#include <sys/types.h>

int main(void) {
    char name[] = "aissyne";
    struct passwd *pass = getpwnam(name);
    printf("%d  %s\n", pass->pw_uid, pass->pw_name);
    return EXIT_SUCCESS;
}