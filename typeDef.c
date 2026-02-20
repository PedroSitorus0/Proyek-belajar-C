#include <stdio.h>

typedef int Number;
typedef char* String;

int main(void) {

    Number x =3;
    Number y = 3;
    String name = "Pedro Armando Sitorus";
    Number z = x + y; printf("%i\n", z);
    printf("%s", name);

    return 0;
}