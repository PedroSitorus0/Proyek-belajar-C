#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <bits/stdio2.h>

// Struct untuk menu
typedef struct {
    char nama[50];
    int harga;
} Menu;

int main() {
    // Inisialisasi menu
    Menu daftarMenu[] = {
        {"Ayam Goreng", 23000},
        {"Pisang Goreng", 33000},
        {"Kopi", 23000},
        {"Ikan Goreng", 12000},
        {"Steak", 43000},
        {"Nasi Goreng", 34000},
        {"Donat", 12000}
    };
    int jumlahMenu = sizeof(daftarMenu) / sizeof(daftarMenu[0]);

    bool pesan;
    char jawaban[10];

    // Tanya apakah ingin memesan
    printf("Apakah anda ingin memesan? (ya/tidak): ");
    scanf("%9s", jawaban);

    // Cek jawaban (case insensitive sederhana)
    if (strcmp(jawaban, "ya") == 0 || strcmp(jawaban, "Ya") == 0 ||
        strcmp(jawaban, "YA") == 0 || strcmp(jawaban, "yA") == 0) {
        pesan = true;
    } else {
        pesan = false;
    }

    if (!pesan) {
        printf("Terima kasih telah mengunjungi kafe kami.\n");
        return 0; // Program selesai
    }

    // ====================================================
    // TAMPILKAN MENU
    // ====================================================
    printf("\n========== MENU KAFE ==========\n");
    printf("No  | Nama Menu            | Harga\n");
    printf("----+----------------------+--------\n");
    for (int i = 0; i < jumlahMenu; i++) {
        printf("%-3d | %-20s | Rp%5d\n", i+1, daftarMenu[i].nama, daftarMenu[i].harga);
    }
    printf("================================\n");

    // ====================================================
    // PROSES PEMESANAN
    // ====================================================
    int pilihan, jumlah;
    int totalKeseluruhan = 0;
    char lagi;

    // Simpan item yang dipesan untuk struk (maksimal 100 item)
    // Pendekatan sederhana: langsung cetak setiap kali pesan
    // Tapi agar lebih rapi, kita tampilkan rekap di akhir

    printf("\n--- Mulai Memesan ---\n");
    do {
        // Input nomor menu
        printf("\nPilih nomor menu (1-%d): ", jumlahMenu);
        scanf("%d", &pilihan);

        // Validasi pilihan
        if (pilihan < 1 || pilihan > jumlahMenu) {
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
        printf("\n+ %s %dx = Rp%d\n", daftarMenu[pilihan-1].nama, jumlah, subtotal);

        // Tanya apakah mau pesan lagi
        printf("\nPesan lagi? (y/t): ");
        scanf(" %c", &lagi);  // spasi sebelum %c penting

    } while (lagi == 'y' || lagi == 'Y');

    // ====================================================
    // TAMPILKAN TOTAL AKHIR
    // ====================================================
    printf("\n========== STRUK PEMBELIAN ==========\n");
    printf("Total yang harus dibayar: Rp%d\n", totalKeseluruhan);
    printf("Terima kasih telah memesan!\n");
    printf("======================================\n");

    return 0;
}