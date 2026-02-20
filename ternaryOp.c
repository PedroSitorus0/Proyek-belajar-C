#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int ikan = 1;
    int number = 8;
    int age =17;
    int hours= 9;
    int minutes= 2;
    char *meridiem = (hours < 12) ? "AM" : "PM";
    ikan ? printf("ikan goreng") : printf("ikan belum di bersihkan");
    printf("\n");

    printf("%s", (ikan) ? "ikan" : "gak tahu");
    printf("\n");
    printf("%d is %s", number,(number%2 == 0) ? "even" : "odd");

    printf("\n");
    
    printf("%s", (age >= 18) ? "My" : "hellnah");
    printf("\n");
    
    printf("%02d:%02d %s", hours, minutes, meridiem);
    printf("\n");
    
    return 0;
}