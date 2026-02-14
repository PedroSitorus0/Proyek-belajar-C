#include <stdio.h>
#include<string.h>
#include<strings.h>


int main () {
    int age;
    int status = 0;

    printf("masukan usia anda: ");
    scanf("%d", &age);


    if (age <= 0) {
        printf("Mohon input usia yang valid\n");
        status = 1;
    } else if (age < 18) {
        printf("anda masih dibawah umur\n");
    } else {
        printf("anda sudah dewasa\n");
    }
    


    return status;
}