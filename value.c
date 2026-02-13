#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    // int age = 25;
    // float price = 23.33;
    // double pi = 3.1415926525797;
    // char currency = '$';
    // char *name = "pedro armando sitorus";


    // printf("Halo %s\n", name);
    // printf("pi = %lf\n", pi);
    // printf("price %c%.2f\n", currency,price);

    // int num1 = 1;
    // int num2 = 10;
    // int num3 = -100;

    // printf("%3d\n", num1);
    // printf("%3d\n", num2);
    // printf("%+3d\n", num3);

    // int x = 2;
    // float y = 9;
    // float z = 0;
    
    // int x = 10;
    // int y = 3;
    // int z = 0;
    // z+= 100;
    // z-= 99;
    // z = x % y;
    // printf("%d\n", z);


    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[100] = "";
    
    
    printf("masukan nama usia anda: ");
    scanf("%d", &age);
    
    printf("masukan IPK anda: ");
    scanf(" %f", &gpa);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("masukan grade anda: ");
    scanf(" %c", &grade);

    while ((c =getchar()) != '\n' && c != EOF);
    
    printf("masukan nama anda: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';


    printf("\n=== DATA PENGGUNA ===\n");
    printf("Usia   : %d tahun\n", age);
    printf("IPK    : %.2f\n", gpa);
    printf("Grade  : %c\n", grade);
    printf("Nama   : %s\n", name);
    printf("=====================\n");
}