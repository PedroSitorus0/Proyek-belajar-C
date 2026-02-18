#include <stdio.h>
#include <string.h>

int main(void) {

    int coloum = 0;
    int rows =0;
    char symbol[50] = "";
    int ch;
    printf("Masukan banyaknya baris: ");
    scanf("%d", &rows);

    printf("masukan jumlah kolom: ");
    scanf("%d", &coloum);

    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("masukan simbol: ");
    scanf("%s", &symbol);

    
    for (int i = 0; i < rows; i++)
    {
        for (int i = 0; i < coloum; i++)
    {
        printf("%s ", symbol);
    }
        printf("\n");
    }
    

    return 0;
}