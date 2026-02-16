#include <stdio.h> 
#include <math.h>
int main() 
{ int x, y; printf("Masukkan dua angka: "); scanf("%d %d", &x, &y); int hasil = x * y; 
    if (hasil >= 100) {
    printf("Hasil besar\n");
    printf("%d\n", hasil);
    }
    else {printf("Hasil kecil\n");
        printf("%d\n", hasil); 
    } 
     return 0;
} 