#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



typedef struct {
    int id;
    char nama[50];
    int harga;
    int stok;
} Barang;


typedef struct {
    int idBarang;
    char namaBarang[50];
    int hargaSatuan;
    int jumlah;
    int totalHarga;
} ItemKeranjang;


void clearScreen();
void tampilBarang(Barang *daftarBarang, int jumlahBarang);
int cariBarang(Barang *daftarBarang, int jumlahBarang, int id);
void simpanStruk(ItemKeranjang *keranjang, int jumlahItem, int totalBayar);


int main() {
    Barang *daftarBarang = NULL; // pointer ke array barang
    int jumlahBarang = 0;
    int nextId = 1;

    ItemKeranjang *keranjang = NULL; // pointer ke array keranjang
    int jumlahItemKeranjang = 0;

    int pilihan, pilihanRole;

    do {
        clearScreen();
        printf("===== SISTEM TOKO =====\n");
        printf("1. Admin\n");
        printf("2. Customer\n");
        printf("3. Keluar\n");
        printf("Pilih role: ");
        scanf("%d", &pilihanRole);

        switch (pilihanRole) {
            case 1: { 
                int pilihanAdmin;
                do {
                    clearScreen();
                    printf("===== MENU ADMIN =====\n");
                    printf("1. Tambah Barang\n");
                    printf("2. Lihat Barang\n");
                    printf("3. Ubah Stok/Harga Barang\n");
                    printf("4. Kembali\n");
                    printf("Pilih menu: ");
                    scanf("%d", &pilihanAdmin);

                    switch (pilihanAdmin) {
                        case 1: { // Tambah Barang
                            // Gunakan realloc untuk menambah ukuran array
                            daftarBarang = (Barang*)realloc(daftarBarang, (jumlahBarang + 1) * sizeof(Barang));
                            if (daftarBarang == NULL) {
                                printf("Gagal alokasi memori.\n");
                                exit(1);
                            }
                            Barang *b = &daftarBarang[jumlahBarang];
                            b->id = nextId++;
                            printf("Masukkan nama barang: ");
                            scanf("%s", b->nama); // sederhana, tanpa spasi
                            printf("Masukkan harga barang: ");
                            scanf("%d", &b->harga);
                            printf("Masukkan stok barang: ");
                            scanf("%d", &b->stok);
                            jumlahBarang++;
                            printf("Barang berhasil ditambahkan dengan ID %d.\n", b->id);
                            break;
                        }
                        case 2: // Lihat Barang
                            tampilBarang(daftarBarang, jumlahBarang);
                            break;
                        case 3: { // Ubah Stok/Harga
                            int id, pilihanUbah;
                            tampilBarang(daftarBarang, jumlahBarang);
                            if (jumlahBarang == 0) break;
                            printf("Masukkan ID barang yang akan diubah: ");
                            scanf("%d", &id);
                            int idx = cariBarang(daftarBarang, jumlahBarang, id);
                            if (idx == -1) {
                                printf("Barang tidak ditemukan.\n");
                                break;
                            }
                            printf("1. Ubah stok\n2. Ubah harga\nPilih: ");
                            scanf("%d", &pilihanUbah);
                            if (pilihanUbah == 1) {
                                printf("Stok baru: ");
                                scanf("%d", &daftarBarang[idx].stok);
                            } else if (pilihanUbah == 2) {
                                printf("Harga baru: ");
                                scanf("%d", &daftarBarang[idx].harga);
                            } else {
                                printf("Pilihan tidak valid.\n");
                            }
                            printf("Data berhasil diubah.\n");
                            break;
                        }
                        case 4:
                            printf("Kembali ke menu utama.\n");
                            break;
                        default:
                            printf("Pilihan tidak valid.\n");
                    }
                    if (pilihanAdmin != 4) {
                        printf("Tekan Enter untuk melanjutkan...");
                        getchar(); getchar(); // membersihkan buffer dan menunggu enter
                    }
                } while (pilihanAdmin != 4);
                break;
            }
            case 2: { // Customer
                int pilihanCustomer;
                do {
                    clearScreen();
                    printf("===== MENU CUSTOMER =====\n");
                    printf("1. Lihat Barang\n");
                    printf("2. Tambah ke Keranjang\n");
                    printf("3. Lihat Keranjang\n");
                    printf("4. Checkout & Simpan Struk\n");
                    printf("5. Kembali\n");
                    printf("Pilih menu: ");
                    scanf("%d", &pilihanCustomer);

                    switch (pilihanCustomer) {
                        case 1:
                            tampilBarang(daftarBarang, jumlahBarang);
                            break;
                        case 2: { // Tambah ke Keranjang
                            if (jumlahBarang == 0) {
                                printf("Belum ada barang yang tersedia.\n");
                                break;
                            }
                            tampilBarang(daftarBarang, jumlahBarang);
                            int id, jumlahBeli;
                            printf("Masukkan ID barang: ");
                            scanf("%d", &id);
                            int idx = cariBarang(daftarBarang, jumlahBarang, id);
                            if (idx == -1) {
                                printf("Barang tidak ditemukan.\n");
                                break;
                            }
                            printf("Masukkan jumlah beli: ");
                            scanf("%d", &jumlahBeli);
                            // Cek stok
                            if (jumlahBeli > daftarBarang[idx].stok) {
                                printf("Stok tidak mencukupi. Stok tersedia: %d\n", daftarBarang[idx].stok);
                                break;
                            }
                            // Tambah ke keranjang dengan realloc
                            keranjang = (ItemKeranjang*)realloc(keranjang, (jumlahItemKeranjang + 1) * sizeof(ItemKeranjang));
                            if (keranjang == NULL) {
                                printf("Gagal alokasi memori.\n");
                                exit(1);
                            }
                            ItemKeranjang *item = &keranjang[jumlahItemKeranjang];
                            item->idBarang = daftarBarang[idx].id;
                            strcpy(item->namaBarang, daftarBarang[idx].nama);
                            item->hargaSatuan = daftarBarang[idx].harga;
                            item->jumlah = jumlahBeli;
                            item->totalHarga = daftarBarang[idx].harga * jumlahBeli;
                            jumlahItemKeranjang++;

                            // Kurangi stok barang
                            daftarBarang[idx].stok -= jumlahBeli;
                            printf("Barang ditambahkan ke keranjang.\n");
                            break;
                        }
                        case 3: { // Lihat Keranjang
                            if (jumlahItemKeranjang == 0) {
                                printf("Keranjang kosong.\n");
                                break;
                            }
                            printf("\n===== KERANJANG BELANJA =====\n");
                            printf("Nama Barang\tJumlah\tHarga Satuan\tTotal\n");
                            int total = 0;
                            for (int i = 0; i < jumlahItemKeranjang; i++) {
                                printf("%s\t%d\t%d\t\t%d\n", keranjang[i].namaBarang,
                                       keranjang[i].jumlah, keranjang[i].hargaSatuan, keranjang[i].totalHarga);
                                total += keranjang[i].totalHarga;
                            }
                            printf("----------------------------------------\n");
                            printf("TOTAL: %d\n", total);
                            break;
                        }
                        case 4: { // Checkout
                            if (jumlahItemKeranjang == 0) {
                                printf("Keranjang kosong. Tidak ada yang di-checkout.\n");
                                break;
                            }
                            int total = 0;
                            for (int i = 0; i < jumlahItemKeranjang; i++) {
                                total += keranjang[i].totalHarga;
                            }
                            // Simpan struk ke file
                            simpanStruk(keranjang, jumlahItemKeranjang, total);

                            // Kosongkan keranjang (free memori lama, alokasi baru 0)
                            free(keranjang);
                            keranjang = NULL;
                            jumlahItemKeranjang = 0;
                            printf("Checkout selesai. Terima kasih!\n");
                            break;
                        }
                        case 5:
                            printf("Kembali ke menu utama.\n");
                            break;
                        default:
                            printf("Pilihan tidak valid.\n");
                    }
                    if (pilihanCustomer != 5) {
                        printf("Tekan Enter untuk melanjutkan...");
                        getchar(); getchar();
                    }
                } while (pilihanCustomer != 5);
                break;
            }
            case 3:
                printf("Terima kasih telah menggunakan program ini.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
        if (pilihanRole != 3) {
            printf("Tekan Enter untuk melanjutkan...");
            getchar(); getchar();
        }
    } while (pilihanRole != 3);

    // Bersihkan memori sebelum keluar
    free(daftarBarang);
    free(keranjang);
    return 0;
}

void clearScreen() {
    system("clear"); // untuk Windows, ganti "clear" jika Linux/Mac
}

// Fungsi untuk menampilkan daftar barang
void tampilBarang(Barang *daftarBarang, int jumlahBarang) {
    if (jumlahBarang == 0) {
        printf("Belum ada barang.\n");
        return;
    }
    printf("\nDaftar Barang:\n");
    printf("ID\tNama\t\tHarga\tStok\n");
    for (int i = 0; i < jumlahBarang; i++) {
        printf("%d\t%s\t\t%d\t%d\n", daftarBarang[i].id, daftarBarang[i].nama, daftarBarang[i].harga, daftarBarang[i].stok);
    }
}


int cariBarang(Barang *daftarBarang, int jumlahBarang, int id) {
    for (int i = 0; i < jumlahBarang; i++) {
        if (daftarBarang[i].id == id) return i;
    }
    return -1;
}

void simpanStruk(ItemKeranjang *keranjang, int jumlahItem, int totalBayar) {
    FILE *file = fopen("struk.txt", "a"); // append ke file struk.txt
    if (file == NULL) {
        printf("Gagal membuka file untuk menyimpan struk.\n");
        return;
    }

    // Mendapatkan waktu sekarang (sederhana)
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    fprintf(file, "\n========== STRUK PEMBELIAN ==========\n");
    fprintf(file, "Tanggal: %02d-%02d-%d %02d:%02d:%02d\n",
            t->tm_mday, t->tm_mon+1, t->tm_year+1900,
            t->tm_hour, t->tm_min, t->tm_sec);
    fprintf(file, "--------------------------------------\n");
    fprintf(file, "Nama Barang\tQty\tHarga\tTotal\n");
    for (int i = 0; i < jumlahItem; i++) {
        fprintf(file, "%s\t%d\t%d\t%d\n", keranjang[i].namaBarang,
                keranjang[i].jumlah, keranjang[i].hargaSatuan, keranjang[i].totalHarga);
    }
    fprintf(file, "--------------------------------------\n");
    fprintf(file, "TOTAL BAYAR: %d\n", totalBayar);
    fprintf(file, "======================================\n\n");
    fclose(file);
    printf("Struk berhasil disimpan ke file struk.txt\n");
}