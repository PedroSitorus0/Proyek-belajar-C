#include <stdio.h>

int main() {

    int x = 6;  // 00000110
    int y = 12; // 00001100
    int z = 0;  // 00000000

    z = x & y;
    printf("AND = %d\n", z); //AND

    z = x | y;
    printf("OR = %d\n", z); //OR

    z = x ^ y;
    printf("XOR = %d\n", z); //XOR

    z = x << 1;
    printf("SHIFT LEFT = %d\n", z);

       z = x >> 1;
    printf("SHIFT RIGHT = %d\n", z);
    return 0;
}