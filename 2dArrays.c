#include <stdio.h>


int main() {

    char numpad[][3] = {{'1', '2', '3'}, 
                        {'4', '5', '6'}, 
                        {'7', '8', '9'}, 
                        {'*', '0', '#'}};
    // printf("%d \n", numbers[1][0]);

    char baris = sizeof(numpad) / sizeof(numpad[0]);
    char kolom = sizeof(numpad[0]) / sizeof(numpad[0][0]);
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}