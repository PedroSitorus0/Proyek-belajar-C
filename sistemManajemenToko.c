#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


typedef int Numbers;


typedef struct {
    char namaProduk[50]; 
    Numbers harga;       
    Numbers stok;
} Produk;

int getChoice();
void cekBarang(Produk produk);

int main() {
    int pilihan;
    printf("Selamat datang di Sistem Manajemen Toko!\n");
    

    do {
        pilihan = getChoice();
        jumlahProduk = cekBarang(produk);
        switch(pilihan) {
            case 1:

            printf("\n[Fitur Cek Barang akan dibuat di sini]\n");
            for (int i = 0; i < jumlahProduk; i++)
            {
                
            }
            
            break;
            case 2:
            printf("\n[Fitur Tambah Barang akan dibuat di sini]\n");
            break;
            case 3:
            printf("\n[Fitur Beli Barang akan dibuat di sini]\n");
            break;
            case 4:
            printf("\nKeluar dari program. Terima kasih!\n");
            break;
        }
    } while (pilihan != 4);
    
    return 0;
}

int getChoice() {
    int choice = 0;
    do {
        printf("\n=== MENU TOKO ===\n");
        printf("1. Cek Barang\n");
        printf("2. Tambah Barang\n");
        printf("3. Beli Barang\n");
        printf("4. Keluar\n");
        printf("Pilih salah satu (1-4): ");

        scanf("%d", &choice); 
        
        if(choice < 1 || choice > 4) {
            printf("Pilihan tidak valid. Silakan coba lagi!\n");
        }
    } while (choice < 1 || choice > 4);
    
    return choice;
}

void cekBarang(Produk produk){
    Produk produk[] = {
        {"Rokok", 28000, 12},
        {"Susu", 5000, 20},
        {"Mie instan", 4000, 100},
        {"Telur", 2000, 10},
        {"Camilan", 100, 1000},
        {"Kecap", 100, 100},
        {"Saus Tomat", 1000, 100},
        {"Diterjen", 2000, 100},
        {"Minuman dingin", 3000, 100},
        {"Kopi", 2500, 1000},
        {"Kayu Putih", 9000, 7},
    };
    return produk;
}