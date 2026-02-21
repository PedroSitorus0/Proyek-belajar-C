#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef int Numbers;

typedef struct
{
    char *namaProduk;
    Numbers *harga;
    Numbers *stok;
}Produk;


int getChoice();

typedef struct 
{
    char *nama;
    Numbers *harga;
    Numbers *stok;
}tambahProduk;



int main() {




    return 0;
}

int getChoice() {
    int choice = 0;
    do {
    printf("pilih salah satu: \n");
    printf("1. cek barang   : \n");
    printf("2. tambah barang: \n");
    printf("3. pilih barang : \n");
    printf("4. keluar       : \n");
    } while (choice < 1 || choice > 4);
    
    return choice;
}












