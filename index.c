#include <stdio.h>
#include <stdbool.h>


// enum semester{
//     SATU,
//     DUA,
//     TIGA,
//     EMPAT,
//     LIMA,
//     ENAM,
//     TUJUH,
//     DELAPAN
// };

// struct mahasiswa
// {
//     const char nama[50];
//     char kelas[10];
//     int usia;
//     float gpa;
//     char grade;

// };

int main() {

    const char  *nama = "pedro armando sitorus";
    const char *kelas = "G2025";
    const int NIM = 251110104;
    bool status = 1;
    

    const char *s = status ? "Aktif" : "Tidak Aktif";

    printf("======================================\n");
    printf("halo %s dengan NIM %i\n", nama, NIM);
    printf("kelas anda %s\n", kelas);
    printf("status kemahasiswaan %s\n", s);

    // printf("alamat string 's = %p\n", (void)s);
    // printf("panjang NIM = %d digit\n", printf("%d", NIM)- 1);
    printf("alamat string 's' = %p\n", (void*)s);
    printf("panjang NIM = %d digit\n", printf("%d", NIM) - 1);
    
    return 0;
}