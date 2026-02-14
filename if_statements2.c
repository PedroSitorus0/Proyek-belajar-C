#include <stdio.h>
#include <string.h>
#include <strings.h>

int main () {


    char name[50] = ""; 

    printf("enter yout name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1 ] = '\0';

    if (strlen(name) <= 2) {
        printf("You did not enter your name\n");
    } else {
        printf("Hello %s\n", name);
    }

    return 0;

}