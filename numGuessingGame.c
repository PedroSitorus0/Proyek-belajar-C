#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(NULL));
    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 10;
    int ans = (rand() % (max - min +1)) + min;

    printf("---NUMBER GUESSING GAME---\n");
    do
    {
        printf("ffenter your number diantara %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;
        if (guess < ans)
        {
            printf("terlalu rendah\n");
        } else if (guess > ans) {
            printf("terlalu tinggi\n");
        } else {
            printf("BENAR!!!\n");
        }
        if (tries == 4)
        {
            printf("maaf tebakan anda telah melewati batas.\n");
            printf("angka yang benar ialah %d.\n" ,ans);
            return 0;
        }
        
        
    } while (guess != ans);

    printf("The answer is %d\n", ans);
    printf("It took you %d tries\n", tries);

    return 0;
}