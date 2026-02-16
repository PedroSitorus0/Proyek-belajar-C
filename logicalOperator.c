#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (int *argc[]) {
    int yep = 0;
    int temp;
    bool cuaca = true;
    printf("Masukan temperatur: ");
    scanf("%d", &temp);

    if (!temp <= 0 && cuaca)
    {
        printf("aman bos!!!\n");
    } else {
        printf("mau mati kapan lu!\n");
    }
    

    return yep;
}