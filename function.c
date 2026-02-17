#include <stdio.h>
#include <string.h>

void hello(char name[50], int age) {

    printf("happy birthday %s\n", name);
    printf("your age is %d\n", age);
    printf("I hate you!!!\n");
}

void g (char name[50], int age) {
    printf("hallo %s\n", name);
    printf("maaf usia anda masih %d oleh karena itu anda belum bisa mengunjungi web ini\n", age);
}

int main (int *argv[]) {
    int yep = 0;
    int invalid = 1;
    int age;
    char name[50] = "";

    printf("masukan nama anda: "); fgets(name, sizeof(name),stdin);
    name[strlen(name) -1 ] = '\0';
    printf("masukan usia anda: "); scanf("%d", &age);

    if (age >= 18)
    {
        hello(name, age);
    } else {
        g(name, age);
    }
    


    return yep;
}