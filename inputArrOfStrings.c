#include <stdio.h>
#include <string.h>
int main(void) {

    char names[4][25] = {0};

    printf("--database siswa--\n");
    int baris = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < baris; i++)
    {
        printf("masukan nama siswa: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) -1] = '\0';
        
        
    }
    for (int j = 0; j < baris; j++)
    {
        printf("%s ",names[j]);
        printf("\n");
    }

    return 0;
}