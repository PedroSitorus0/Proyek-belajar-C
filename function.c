#include <stdio.h>
#include <string.h>

void hello(char name[50], int age) {

    printf("happy birthday %s", name);
    printf("your age is %d\n", age);
    printf("I hate you!!!\n");
}
int main (int *argv[]) {
    int yep = 0;
    int invalid = 1;
    int age;
    char name[50] = "";

    printf("masukan nama anda: "); fgets(name, sizeof(name),stdin);
    printf("masukan usia anda: "); scanf("%d", &age);

    hello(name, age);
    hello(name, age);
    hello(name, age);
    hello(name, age);



    return yep;
}