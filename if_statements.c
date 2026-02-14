#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>


int main () {
    int age = 0;

    printf("halo selamat datang di pengecekan umur\n");
    printf("Silahkan Input umur anda dengan jujur: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("expired\n");
        char jawaban;
        printf("udan dapet kerja belum? (y/t)");
        scanf(" %c", &jawaban);
        if (jawaban == 'y' || jawaban == 'Y')
        {
            printf("hore udah kerja!!!\n");
        } else {
            printf("GET A JOB!!!\n");
        }
        
    } else if (age < 0) {
        printf("ngawor anda belum lahir, mohon intput data yang benar\n");
    } else if (age < 18 && age >=1) {
        printf("anda masih dibawah umur\n");
    } else if (age == 0 ) {
        printf("kamu baru lahir\n");
    } else {
        printf("mohon input umur yang sesuai!\n");
    }

    return 0;
}