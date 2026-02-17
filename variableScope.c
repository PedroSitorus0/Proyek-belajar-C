#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void yeah(char name[], int age); //funciton prototype
bool ageCheck(int age);

int main() {
    int yep = 0;
    yeah("ikan", 13);
    
    if (ageCheck(32))
    {
        printf("anda dapat berkerja di perusahaan ini\n");
    } else {
        printf("maaf tapi usia anda belum memenuhi syarat yang ada\n");
    }
    
    
    return 0;
}

void yeah(char name[], int age) {
    printf("hello %s\n",name);
    printf("you are %d years old.\n", age);
}

bool ageCheck(int age) {
   return age >= 16;
}