#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

typedef int Numbers;
int getCoinGame(void);
int comChoice(void);

int main(void) {
    srand(time(0));
    printf("---coin game---\n");
    Numbers userChoice = getCoinGame();
    Numbers RandNum = comChoice();
    if (userChoice == RandNum)
    {
        printf("Hore Anda Menang\n!");
        system("steam");
    } else {
        printf("Anda kalah!\n");
        sleep(1);

        for (int i = 0; i <= 10; i++)
    {
        printf("Mematikan Sistem_%d  [OK]\n", i);
        usleep(50000);
    }
    sleep(2);
    system("firefox --new-window https://facebook.com > /dev/null 2>&1 &");
    }
   
    

    return 0;
}


int getCoinGame() {
    int choice = 0;
    printf("Masukan pilihan: (0 untuk Garuda dan 1 untuk Angka )");
    scanf("%d", &choice);
    return choice;
}


int comChoice(void) {
    return rand() % 2;
}