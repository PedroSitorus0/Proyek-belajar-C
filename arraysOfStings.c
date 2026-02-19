#include <stdio.h>


int main(void) {

    char fruits[][20] = {"apple", "banana", "coconut", "kiwi", "dragonfruits"};

    int baris= sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][0] = 'e';
    fruits[0][4] = 'a';
    // int kolom= sizeof(fruits[0]) / sizeof(fruits[0][0]);
    for (int i = 0; i < baris; i++ )
    {
        // for (int j = 0; j < kolom; j++)
        // {
        //     printf("%s\n", fruits[i][j]);
        // }
        // printf("\n");
        printf("%s\n",fruits[i]);
    }
    
    return 0;
}