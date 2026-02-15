#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main() {
    int yep = 0;
    int invalid = 1;
    int dayOfWeek = 0;
    int result;

    while (invalid) {
    printf ("hari apa yang ingin anda cari: ");

    result= scanf("%d", &dayOfWeek);
    
    if (result != invalid)
    {
        while (getchar() != '\n');
        {
            printf("Input harus berupa angka. silahkan coba lagi\n");
            continue;
        }
        
    }
    if (dayOfWeek >= 1 && dayOfWeek <= 7)
    { switch (dayOfWeek) {
    case 1:printf("Hari Senin   \n"); break;
    case 2:printf("Hari Selasa  \n"); break;
    case 3:printf("Hari Rabu  \n"); break;
    case 4:printf("Hari Kamis  \n"); break;
    case 5:printf("Hari Jumat   \n"); break;
    case 6:printf("Hari Sabtu \n"); break;
    case 7:printf("Hari Minggu \n"); break;
    }
    break;
    } else {
        printf("Anfka harus antara 1-7. Silahkan coba lagi.\n");
    }
}
    return yep;
}