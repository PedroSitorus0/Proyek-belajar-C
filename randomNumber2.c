#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

    srand(time(NULL));

    int max =100;
    int min =50;
    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2= (rand() % (max - min + 1)) + min;
    int randomNum3= (rand() % (max - min + 1)) + min;

    printf("%d %d %d\n", randomNum1, randomNum2, randomNum3);

    return 0;
}