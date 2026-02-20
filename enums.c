#include <stdio.h>

typedef enum {
    MINGGU, SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, 
}hari;

typedef enum {
    SUCCESS, FAILURE, PENDING

}Status;

void connectStatus(Status ikan);

int main(void) {
    hari today = 5;
    Status ikan = SUCCESS;
    printf("%i", today);
    printf("\n");
    today, ikan == (SABTU || MINGGU) && (!FAILURE) ? printf("weekend %d", ikan) : printf("Kerja-kerja-kerja %d", ikan);
    printf("\n");

    connectStatus(ikan);
    printf("\n");
    return 0;
}


void connectStatus(Status ikan) {

    switch (ikan)
    {
    case SUCCESS:
        printf("SUKSES");
        break;
    case FAILURE:
        printf("GAGAL");
        break;
    case PENDING:
        printf("PENDING...");
        break;
    default:
        
        break;
    }

}