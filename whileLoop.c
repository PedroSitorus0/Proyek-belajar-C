#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <strings.h>

int main() {
    

    int ikan = 0;
    char name[50] = "";
    
    
do {
        printf("masukan nama anda: ");
            if (fgets(name, sizeof(name), stdin) == NULL)
            {
                printf("error!\n");
                return 1;
            }
        name[strcspn(name, "\n")] = '\0';

        printf("Aku cinta ikan, masukan angka yang lebih besar dari 0: ");
        scanf("%i", &ikan);
        while (getchar() != '\n');
            
    } while (ikan <= 0 || strlen(name) == 0);
    
    printf("halo %s\n", name);
    printf("dam nomor anda %d\n", ikan);

    return 0;
}