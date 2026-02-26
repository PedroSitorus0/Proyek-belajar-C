#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    // Alokasi 500 MB
    size_t ukuran = 700 * 1024 * 1024; 
    printf("Mengalokasikan %zu MB...\n", ukuran / (1024*1024));
    
    void *ptr = malloc(ukuran);
    if (ptr == NULL) {
        perror("malloc gagal");
        return 1;
    }
    
    // Tulis agar benar-benar menggunakan RAM fisik
    memset(ptr, 0, ukuran);
    printf("Memori telah dialokasikan dan diisi. Sekarang gunakan alat pemantau.\n");
    printf("Tekan Ctrl+C untuk keluar.\n");
    
    // Tidur selama 60 detik (agar sempat memantau)
    sleep(60);
    
    free(ptr);
    printf("Memori dibebaskan.\n");
    return 0;
}