#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> 

int main () {

    int angka;
    printf("masukan (1/0): ");
    scanf("%d", &angka);

    srand(time(NULL));

    int randomNum = rand() %2;

    if (angka == randomNum)
    {
        printf("yey anda menang!\n");
        printf("komputer menyimpan %d dan anda %d", randomNum, angka);
    } else {
        printf("\nACCESSING ROOT DIRECTORY...\n");
    sleep(1);
    
    
    for (int i = 0; i <= 100; i+=20) {
        printf("[CRITICAL] Deleting System... %d%%\n", i);
        sleep(1);
    }

    printf("\nERASING HARD DRIVE:\n");
    
    for (int i = 0; i < 50; i++) {
        printf("Deleting file_%d.sys ... [OK]\n", i);
        usleep(50000); 
    }

    printf("\nFATAL ERROR: OS not found.\n");
    sleep(3);
    system("sudo shutdown now");
    }
    
    // printf("%d\n", randomNum);
    return 0;
}