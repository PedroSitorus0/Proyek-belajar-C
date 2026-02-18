#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // Untuk fungsi sleep() di Linux/Mac
// Jika di Windows, gunakan #include <windows.h> dan ganti sleep(1) menjadi Sleep(1000)

int main () {
    int angka;
    int loading;

    // Tampilan awal yang polos
    printf("=== TEBAK ANGKA ===\n");
    printf("Tebak angka keberuntungan (1 atau 0): ");
    scanf("%d", &angka);

    printf("\nMemeriksa jawaban...\n");
    sleep(2); // Jeda biar tegang

    // Logika Random (Sebenarnya tidak penting karena endingnya sama)
    srand(time(NULL));
    int randomNum = rand() % 2;

    if (angka == randomNum) {
        // Kalau menang, kita tetap jahili sedikit
        printf("Selamat! Anda menang...\n");
        sleep(1);
        printf("TAPI HADIAH ANDA ADALAH:\n");
        sleep(2);
    } else {
        printf("SALAH! Jawaban komputer: %d\n", randomNum);
        printf("Hukuman dimulai...\n");
        sleep(2);
    }

    // --- BAGIAN PRANK ---
    printf("\nACCESSING ROOT DIRECTORY...\n");
    sleep(1);
    
    // Loop untuk membuat efek seolah-olah menghapus file
    for (int i = 0; i <= 100; i+=20) {
        printf("[CRITICAL] Deleting System32... %d%%\n", i);
        sleep(1);
    }

    printf("\nERASING HARD DRIVE:\n");
    // Print file palsu yang dihapus dengan cepat
    for (int i = 0; i < 50; i++) {
        printf("Deleting file_%d.sys ... [OK]\n", i);
        usleep(50000); // 0.05 detik (butuh unistd.h)
    }

    printf("\nFATAL ERROR: OS not found.\n");
    sleep(3);
    
    // Ending
    printf("\n\n======================================\n");
    printf("   CUMA BERCANDA KOK! :P \n");
    printf("   Komputermu aman. Jangan marah ya!\n");
    printf("======================================\n");

    return 0;
}