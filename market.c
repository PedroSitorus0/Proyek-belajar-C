#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <strings.h>

typedef struct 
{
    char nama[50];
    int harga;
    char kerangan[100]; 
} Menu;



int main() {
    Menu daftarMenu[] = {
       {"Ayam Goreng", 18000, "paha"},
       {"Ikan Goreng", 20000, "Ikan Asao"},
       {"Pisang Goreng", 2000, "pisang goreng"},
       {"Mie Rebus", 7000, "Pesan ke kasir jaika ingin rasa yang lain"},
       {"Steak", 5000, "kematangan tulis di Nota"},
       {"Kopi", 4000, "banyaknya gula tulis di Nota"},
       {"Donat", 3000, "Donat"},
       {"Nasi Goreng", 20000, "Keterangan Topping bisa di Nota"} 
    };

    int JumlahMenu = sizeof(daftarMenu) / sizeof(daftarMenu[0]);

    bool pesan;
    char jawaban[10];
    char *currency = "Rp";

    printf("halo selamat datang di market");
    printf("apakah anda ingin memesan? (ya/tidak)");
    scanf("%9s", jawaban);
    if (strcmp(jawaban, "ya") == 0 || strcmp(jawaban, "Ya") == 0 || strcmp(jawaban, "YA") ==  0 || strcmp(jawaban, "yA") == 0) {
        pesan = true;
    } else {
        pesan = false;
    }

    if (!pesan) {
        printf("terima kasih telah mengunjungi kafe ini.\n");
        return 0;
    }
    
    printf("\n============MENU============\n");
    printf("No | Nama Menu        | Harga   | Keterangan\n ");
    printf("----=-----------------+------------+--------\n");
    for (int i = 0; i < JumlahMenu; i++) {
        printf("%-3d | %-20s | %c%5d | %s\n", i+1, daftarMenu[i].nama, currency, daftarMenu[i].harga, daftarMenu[i].kerangan);
    }
    printf("\n=======================\n");

    int  pilihan, jumlah;
    int totalKeseluruhan;
    char lagi;

    printf("\n--- Mulai Memesan ---\n");
    do {
        // Input nomor menu
        printf("\nPilih nomor menu (1-%d): ", JumlahMenu);
        scanf("%d", &pilihan);

        // Validasi pilihan
        if (pilihan < 1 || pilihan > JumlahMenu) {
            printf("Nomor tidak valid. Silakan coba lagi.\n");
            continue;
        }

        // Input jumlah
        printf("Jumlah pesanan: ");
        scanf("%d", &jumlah);

        if (jumlah <= 0) {
            printf("Jumlah harus lebih dari 0.\n");
            continue;
        }

        // Hitung subtotal
        int subtotal = daftarMenu[pilihan-1].harga * jumlah;
        totalKeseluruhan += subtotal;

        // Tampilkan item yang baru dipesan
        printf("\n+ %s %dx = %c%d\n", daftarMenu[pilihan-1].nama, jumlah,currency ,subtotal);

        // Tanya apakah mau pesan lagi
        printf("\nPesan lagi? (y/t): ");
        scanf(" %c", &lagi);  // spasi sebelum %c penting

    } while (lagi == 'y' || lagi == 'Y');

    // ====================================================
    // TAMPILKAN TOTAL AKHIR
    // ====================================================
    printf("\n========== STRUK PEMBELIAN ==========\n");
    printf("Total yang harus dibayar:%c%d\n", currency,totalKeseluruhan);
    printf("Terima kasih telah memesan!\n");
    printf("======================================\n");

    return 0;
   
}   


